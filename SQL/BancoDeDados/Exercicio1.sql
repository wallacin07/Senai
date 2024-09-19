Drop Database Exercicio1;
Create database Exercicio1;
Use Exercicio1;


Create table permissão(
	ID INT PRIMARY KEY auto_increment  NOT NULL,
	descrição Varchar(254) NOT NULL,
    nivelPermissão INT NOT NULL
);


Create table funcionário(
	ID INT PRIMARY KEY auto_increment  NOT NULL,
	nome Varchar(254) NOT NULL,
    cpf VARCHAR(14) not null,
    idPermissão INT NOT NULL,
    FOREIGN KEY (idPermissão) references permissão(ID)
);


Create table produto(
	ID INT PRIMARY KEY auto_increment  NOT NULL,
	nome Varchar(254) NOT NULL,
    disponivel VARCHAR(15) not null,
    dataInserção Date not null,
    idFuncionário INT NOT NULL,
    FOREIGN KEY (idFuncionário) references funcionário(ID)
);

Create table venda(
	ID INT PRIMARY KEY auto_increment  NOT NULL,
    quantidadeVendida INT NOT NULL,
    idFuncionário INT NOT NULL,
    idProduto INT NOT NULL,
    FOREIGN KEY (idFuncionário) references funcionário(ID),
    FOREIGN KEY (idProduto) references produto(ID)
);

Create table solicitaçãoVenda(
	ID INT PRIMARY KEY auto_increment  NOT NULL,
    Pedido Varchar(254) Not null,
    idFuncionário INT NOT NULL,
    Concedido Boolean DEFAULT false,
    idFuncionarioConcedeu INT,
    FOREIGN KEY (idFuncionário) references funcionário(ID),
    FOREIGN KEY (idFuncionarioConcedeu) references funcionário(ID)
);




Insert into permissão(descrição,nivelPermissão) Values
("Permissão de nivel 1", 1),
("Permissão de nivel 2", 2),
("Permissão de nivel 3", 3),
("Permissão de nivel 4", 4),
("Permissão de nivel 5", 5);


Insert into funcionário(nome,cpf,idPermissão) Values
("Wallace", "11122233344",1),
("Cristian", "55566677788",2),
("Mathias", "10120230355",3),
("Kauane", "88888888888",4),
("Sampaio", "11111111111",5);

Insert into produto(nome,disponivel,dataInserção,idFuncionário) Values
("Banana", "Indisponivel",curdate(),3),
("Pera", "disponivel",curdate(),4),
("Maça", "disponivel",curdate(),3),
("Uva", "Indisponivel",curdate(),4),
("sla", "disponivel",curdate(),5);

SELECT * FROM permissão;
SELECT * FROM funcionário;
SELECT * FROM venda;
SELECT * FROM produto;





-- 1 -------------------------------------------------------------------------------------------------------------------------------------


DELIMITER //

Create Procedure InsertFuncionario(nomeNovo Varchar(254), cpfNovo VARCHAR(11),idPermissãoNovo INT)
Begin
start transaction;

Insert into funcionário (nome,cpf,idPermissão) Values
(nomeNovo,cpfNovo,idPermissãoNovo);


IF nomeNovo = NULL or cpfNovo = NULL or idPermissãoNovo = NULL or cpfNovo in (Select F.cpf From funcionário F)  Then
Select "não foi possivel Inserir" as "messsage";
RollBack;
ELSE
Commit;
end if;
End;	

// DELIMITER ;
call InsertFuncionario("Sabrina", "55555555555", 2);
SELECT * FROM funcionário;



-- 2 ------------------------------------------------------------------------------------------------------------------------------------- 


DELIMITER //
Create Procedure updateDisponibilidade(disponibilidade Varchar(15), idFuncionario int, idProduto INT)
Begin

declare idPermissão Int;
Select F.idPermissão into idPermissão From funcionário F where F.ID = idFuncionario;

start transaction;
update produto SET disponivel = disponibilidade Where ID = idProduto;

IF idPermissão > 2 Then
Commit;
ELSE
Select "não foi possivel alterar devido sua permissão baixa" as "messsage";
RollBack;
end if;
End;	
// DELIMITER ;
call updateDisponibilidade("Disponivel", 4,1);
SELECT * FROM produto;



-- 3 -------------------------------------------------------------------------------------------------------------------------------------


DELIMITER //
Create Procedure pedirAlteração(pedidoFuncionario Varchar(254), idFuncionarioPedido int)
Begin

Insert into solicitaçãoVenda(pedido,idFuncionário) Values
(pedidoFuncionario,idFuncionarioPedido);
End;	
// DELIMITER ;
call pedirAlteração("Peço por favor para que deixe eu alterar a tabela de Vendas", 2);
SELECT * FROM solicitaçãoVenda;


-- 4 -------------------------------------------------------------------------------------------------------------------------------------


DELIMITER //
Create Procedure AdicionarProduto(nomeN VARCHAR(254),disponivelN VARCHAR(15) ,idFuncionárioN INT, dataInserido date)
Begin

start transaction;

Insert into produto(nome,disponivel,dataInserção,idFuncionário) Values
(nomeN,disponivelN,dataInserido,idFuncionárioN);


IF dataInserido != curdate() then
Rollback;
Select "Erro ao adicionar produto, data incorreta" as "Erro";
else
commit;
end if;
End;	
// DELIMITER ;
call AdicionarProduto("Manga","Disponivel",4,"2024-08-11");
SELECT * FROM produto;


-- 5 -------------------------------------------------------------------------------------------------------------------------------------


DELIMITER //
Create Procedure updateFuncionario(nomeN VARCHAR(254),cpfN VARCHAR(12) ,idPermissãoNovo INT, idFuncionárioNovo int)
Begin

start transaction;

update funcionário set nome = nomeN and cpf = cpfN and idPermissão = idPermissãoNovo where ID = idFuncionárioNovo;
IF nomeN = NULL or cpfN = NULL or idPermissãoNovo = NULL  or idFuncionárioNovo = NULL then
Rollback;
Select "Erro ao mexer no usuario" as "Erro";
else
commit;
end if;
End;	
// DELIMITER ;

DELIMITER //
Create Procedure deleteFuncionario(idFuncionarioDelete int)
Begin

start transaction;

delete From funcionário where ID =idFuncionarioDelete;

IF nomeN = NULL or cpfN = NULL or idPermissãoNovo = NULL  or idFuncionarioNovo = NULL then
Rollback;
Select "Erro ao mexer no usuario" as "Erro";
else
commit;
end if;
End;	
// DELIMITER ;


-- 6 -------------------------------------------------------------------------------------------------------------------------------------


DELIMITER //
Create Procedure stopVenda( quantidadeVendidaC int, idFuncionarioC int,idProdutoC int )
Begin

declare disponibilidade varchar(25);
select disponivel into disponibilidade From produto where ID = idProdutoC;

start transaction;

Insert into venda(quantidadeVendida,idFuncionário,idProduto) Values
(quantidadeVendidaC,idFuncionarioC,idProdutoC);

IF disponibilidade = "Indisponivel" then
Rollback;
Select "Erro ao mexer no usuario" as "Erro";
else
commit;
end if;
End;	
// DELIMITER ;








