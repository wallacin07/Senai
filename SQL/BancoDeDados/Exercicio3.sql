Drop Database Exercicio3;
Create database Exercicio3;
Use Exercicio3;


CREATE TABLE funcionarios (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(100) NOT NULL,
    cargo VARCHAR(50) NOT NULL,
    salario DECIMAL(10, 2) NOT NULL,
    departamento VARCHAR(50) NOT NULL,
    data_contratacao DATE NOT NULL
);

CREATE TABLE historico_cargos (
    id INT AUTO_INCREMENT PRIMARY KEY,
    funcionario_id INT,
    cargo_anterior VARCHAR(50),
    cargo_novo VARCHAR(50),
    salario_anterior DECIMAL(10, 2),
    salario_novo DECIMAL(10, 2),
    data_mudanca TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (funcionario_id) REFERENCES funcionarios(id)
);

CREATE TABLE aumento_salario_audit (
    id INT AUTO_INCREMENT PRIMARY KEY,
    funcionario_id INT,
    salario_antigo DECIMAL(10, 2),
    salario_novo DECIMAL(10, 2),
    data_aumento TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (funcionario_id) REFERENCES funcionarios(id)
);

CREATE TABLE departamentos_estatisticas (
    departamento VARCHAR(50) PRIMARY KEY,
    total_funcionarios INT DEFAULT 0
);





DELIMITER //
Create Trigger registroSalario
Before update on funcionarios
for each row
Begin
IF new.salario != old.salario Then
	Insert into aumento_salario_audit(funcionario_id,salario_antigo,salario_novo,data_aumento) Values
    (new.id,old.salario,new.salario,curdate());
end if;
End
// DELIMITER ;


DELIMITER //
Create Trigger registroCargo
Before update on funcionarios
for each row
Begin
IF new.cargo != old.cargo Then
	Insert into historico_cargos(funcionario_id,cargo_anterior,cargo_novo,salario_anterior,salario_novo,data_mudanca) Values
    (new.id,old.cargo,new.cargo,old.salario,new.salario,curdate());
end if;
End
// DELIMITER ;




DELIMITER //
Create Trigger registrodepartamentoSaiu
Before delete on funcionarios
for each row
Begin
	update departamentos_estatisticas Set total_funcionarios = total_funcionarios - 1 where departamento = old.departamento;
End
// DELIMITER ;

DELIMITER //
Create Trigger registrodepartamentoNovo
Before insert on funcionarios
for each row
Begin
	update departamentos_estatisticas Set total_funcionarios = total_funcionarios + 1 where departamento = new.departamento;
End
// DELIMITER ;

insert into departamentos_estatisticas(departamento) values 
( "TI");


insert into funcionarios(nome,cargo,salario,departamento,data_contratacao) values 
("Wallace", "gerente", 10000, "TI", curdate());

update funcionarios set salario = 12000 where id = 1;

update funcionarios set cargo = "Lider" where id = 1;

select * from funcionarios;
select * from aumento_salario_audit;
select * from historico_cargos;
select * from departamentos_estatisticas;

