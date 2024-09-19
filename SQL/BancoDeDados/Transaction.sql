create database db_loja;

use db_loja;
-- Estrutura da tabela `marcas`
CREATE TABLE IF NOT EXISTS `marcas` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(50) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dados da tabela `marcas`
INSERT INTO `marcas` (`id`, `nome`) VALUES
(1, 'Toyota'),
(2, 'Honda'),
(3, 'Volkswagen'),
(4, 'Ford'),
(5, 'Chevrolet'),
(6, 'Mercedes-Benz'),
(7, 'BMW');

-- Estrutura da tabela `veiculos`
CREATE TABLE IF NOT EXISTS `veiculos` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `id_marca` int(11) DEFAULT NULL,
  `modelo` varchar(50) DEFAULT NULL,
  `ano` int(11) DEFAULT NULL,
  `preco` decimal(10,2) DEFAULT NULL,
  `cor` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `id_marca` (`id_marca`),
  CONSTRAINT `veiculos_ibfk_1` FOREIGN KEY (`id_marca`) REFERENCES `marcas` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dados da tabela `veiculos`
INSERT INTO `veiculos` (`id`, `id_marca`, `modelo`, `ano`, `preco`, `cor`) VALUES
(1, 1, 'Corolla', 2020, '85000.00', 'Prata'),
(2, 2, 'Civic', 2019, '78000.00', 'Preto'),
(3, 3, 'Golf', 2018, '72000.00', 'Branco'),
(4, 4, 'Fusion', 2019, '79000.00', 'Azul'),
(5, 5, 'Cruze', 2021, '82000.00', 'Vermelho'),
(6, 6, 'Classe A', 2020, '90000.00', 'Branco'),
(7, 7, 'Série 3', 2019, '85000.00', 'Preto'),
(8, 1, 'Etios', 2017, '60000.00', 'Azul'),
(9, 4, 'Focus', 2018, '67000.00', NULL),
(10, 3, 'Gol', 2017, '55000.00', 'Vermelho'),
(11, 5, 'Onix', 2018, '63000.00', 'Preto'),
(12, 6, 'C180', 2019, '98000.00', 'Prata'),
(13, 7, 'X1', 2020, '93000.00', 'Branco'),
(14, 4, 'Ranger', 2019, '90000.00', NULL),
(15, 2, 'Civic', 2017, '70000.00', 'Prata');

-- Estrutura da tabela `clientes`
CREATE TABLE IF NOT EXISTS `clientes` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `nome` varchar(100) DEFAULT NULL,
  `email` varchar(100) DEFAULT NULL,
  `telefone` varchar(20) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dados da tabela `clientes`
INSERT INTO `clientes` (`id`, `nome`, `email`, `telefone`) VALUES
(1, 'João', 'joao@example.com', '(11) 9999-8888'),
(2, 'Maria', 'maria@example.com', '(11) 7777-6666'),
(3, 'Pedro', 'pedro@example.com', '(11) 5555-4444'),
(4, 'Ana', 'ana@example.com', '(11) 3333-2222'),
(5, 'Paula', NULL, '(11) 1111-0000'),
(6, 'Carlos', 'carlos@example.com', NULL);

-- Estrutura da tabela `vendas`
CREATE TABLE IF NOT EXISTS `vendas` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `id_veiculo` int(11) DEFAULT NULL,
  `id_cliente` int(11) DEFAULT NULL,
  `data_venda` date DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `id_veiculo` (`id_veiculo`),
  KEY `id_cliente` (`id_cliente`),
  CONSTRAINT `vendas_ibfk_1` FOREIGN KEY (`id_veiculo`) REFERENCES `veiculos` (`id`),
  CONSTRAINT `vendas_ibfk_2` FOREIGN KEY (`id_cliente`) REFERENCES `clientes` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Dados da tabela `vendas`
INSERT INTO `vendas` (`id`, `id_veiculo`, `id_cliente`, `data_venda`) VALUES
(1, 1, 1, '2023-05-10'),
(2, 2, 3, '2023-06-15'),
(3, 3, 2, '2023-07-20'),
(4, 4, 4, '2023-08-25'),
(5, 5, 5, '2023-09-30'),
(6, 6, 6, '2023-10-05'),
(7, 7, 4, '2023-11-10'),
(8, 8, 2, '2023-12-15'),
(9, 9, 1, '2024-01-20'),
(10, 10, 3, '2024-02-25'),
(11, 11, 5, '2024-03-30'),
(12, 12, 6, '2024-04-05'),
(13, 13, 4, '2024-05-10'),
(14, 14, 2, '2024-06-15'),
(15, 15, 1, '2024-07-20');

-- 01

DELIMITER //
CREATE PROCEDURE primeira()
BEGIN 
START TRANSACTION;
SET @precoAtual = (select preco from veiculos where id = 1);

UPDATE veiculos SET preco = 88000.00 WHERE id = 1;

if @precoAtual <= 85000.00 then commit;
else rollback;
end if;
end;
// DELIMITER //
call primeira();


-- 02


DELIMITER //
CREATE PROCEDURE segunda(nome varchar(50), email varchar(50), telefone varchar(50))
	BEGIN 
	START TRANSACTION;
		SET @emailAtual = (select email from clientes where nome = "laura" limit 1);
		INSERT INTO clientes(nome, email, telefone) values (nome, email, telefone);

		if @emailAtual <> email then commit;
			else rollback;
		end if;
	end;
// DELIMITER //


-- 03 Atualize a cor do veículo com id = 4 para 'Cinza'. Se a cor atual já for 'Cinza', execute um ROLLBACK. Caso contrário, execute um COMMIT.

Delimiter //
Create procedure mudar_Cor( )
begin
	
	declare cor_atual varchar(255);
	select cor into cor_atual from veiculos where id = 4;
	Start transaction;
    if
		cor_atual <> 'Cinza' then
        update veiculos set cor = 'Cinza' where id = 4;
    Commit;
    else
    Rollback;
end if;
end

// Delimiter ; 
call mudar_cor();
select * from veiculos;





-- 04 Exclua a venda com id = 5. Se a venda estiver associada a um cliente cujo nome é 'Paula', execute um ROLLBACK. Caso contrário, execute um COMMIT.



Delimiter //
Create procedure remover_venda( )
begin
	
	declare cliente varchar(255);
		select c.nome into cliente from vendas v inner join clientes c on v.id_cliente = c.id where v.id = 5;
	Start transaction;
    if
		cliente <> 'Paula' then
       delete from vendas where id = 5;
		
        SELECT 'dale' AS 'message';
		Commit;
    else
		SELECT 'foi nao' AS 'message';
    Rollback;
end if;
end

// Delimiter ; 
call remover_venda();
select * from vendas;




-- .05 Atualize o ano do veículo com id = 7 para 2021. Se o ano atual já for 2021, execute um ROLLBACK. Caso contrário, execute um COMMIT.
START TRANSACTION;

UPDATE veiculos
	SET ano = 2021
WHERE id = 7;

SELECT IF (YEAR(CURDATE()) = 2021, ROLLBACK, COMMIT);

DELIMITER //
CREATE PROCEDURE update_year_veiculo(IN new_year INT, IN id_target INT)
BEGIN
    START TRANSACTION;
    
    UPDATE veiculos
		SET ano = new_year
    WHERE id = id_target;
    
    -- Conditional logic
    IF YEAR(CURDATE()) = new_year THEN
        ROLLBACK;
        SELECT 'Tamo nesse ano ai' AS message;
    ELSE
        -- Commit the transaction if the condition is not met
        COMMIT;
        SELECT 'Dale' AS message;
    END IF;
END //

DELIMITER ;




CALL update_year_veiculo(2024, 7);






-- .06 Adicione um novo veículo com modelo = 'Passat', ano = 2021, preço = 95.000,00, cor = 'Azul', e id_marca = 3. Se o modelo já existir, execute um ROLLBACK. Caso contrário, execute um COMMIT.

	DELIMITER //
CREATE PROCEDURE insert_veiculo(IN modelo VARCHAR(255), IN ano INT, IN preco FLOAT, IN cor VARCHAR(20), IN id_marca INT)
BEGIN
    START TRANSACTION;
    
    INSERT INTO veiculos (modelo, ano, preco, cor, id_marca) VALUES (modelo, ano, preco, cor, id_marca);
    IF 
		(SELECT COUNT(v.id) FROM veiculos v WHERE v.modelo = modelo AND v.ano = ano AND v.preco = preco AND v.cor = cor AND id_marca = id_marca) > 1
	THEN 
		SELECT 'tem dois' AS 'message';
		ROLLBACK;
	ELSE
		SELECT 'Dale' AS 'message';
		COMMIT;
	END IF;
END //
DELIMITER ;

DROP PROCEDURE insert_veiculo;

CALL insert_veiculo('Passat', 2021, 95000.00, 'Azul', 3);







-- 07


DELIMITER // 

CREATE PROCEDURE setima(telefone_p VARCHAR(200), id_p INT)
BEGIN 
START TRANSACTION;

	SET @telefone_antigo =  (select telefone from clientes where id = id_p);
    
	UPDATE clientes SET telefone = telefone_p WHERE id = id_p;
    
    IF @telefone_antigo = telefone_p THEN ROLLBACK;
    ELSE COMMIT;
    END IF;
    
END // 

DELIMITER ;



-- 08


DELIMITER //

CREATE PROCEDURE oitava(id_p INT)
BEGIN 
    DECLARE total_vendas INT;
    
    START TRANSACTION;
    
    -- Count the number of sales for the client
    SELECT COUNT(vendas.id) INTO total_vendas
    FROM clientes
    INNER JOIN vendas ON clientes.id = vendas.id_cliente
    WHERE clientes.id = id_p;
    
    -- Delete the client
    DELETE FROM clientes WHERE id = id_p;
    
    -- Check the total sales count and decide to commit or rollback
    IF total_vendas > 0 THEN
        ROLLBACK;
    ELSE
        COMMIT;
    END IF;
    
END //

DELIMITER ;








-- 09 Atualize o modelo do veículo com id = 10 para 'Gol G6'. Se o modelo atual for 'Gol G6', execute um ROLLBACK. Caso contrário, execute um COMMIT.

DELIMITER $

create procedure pr_gol_g6()
begin
	start transaction;
    
    update veiculos set modelo = 'Gol G6' where id = 10;
    
    if (select modelo from veiculos where id = 10) = 'Gol G6'
    then 
		ROLLBACK;
	else
		COMMIT;
	end if;
end
$
DELIMITER ;


-- 10  Adicione uma nova venda com id_veiculo = 2, id_cliente = 4, e data_venda = '2024-08-01'. Se o cliente já tiver uma venda com o mesmo veículo, execute um ROLLBACK. Caso contrário, execute um COMMIT.

DELIMITER $

create procedure pr_venda()
begin
	start transaction;
    
	insert into vendas (id_veiculo, id_cliente, data_venda) values (2, 4, '2024-08-01');
    
    if (select count(*) from venda where id_veiculo = 2 and id_cliente = 4) > 1
    then 
		ROLLBACK;
	else
		COMMIT;
	end if;
end
$
DELIMITER ;
