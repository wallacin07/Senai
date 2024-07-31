Create database final;
drop database final;
use final;

drop table Cliente;
drop table Serviço;
drop table Veiculo;
drop table ItensServiço;
drop table OrdemServiço;
drop table DetalheOrdemItem;

CREATE TABLE Cliente (
    IDCliente integer primary KEY not null auto_increment,
    Nome varchar(255) not null,
    Telefone int not null,
    Endereço varchar(255) not null
);

CREATE TABLE Serviço (
    IDServiço  integer primary KEY not null auto_increment,
    Descrição varchar(255) not null,
    Preço integer not null
);

CREATE TABLE Veiculo (
    IDVeiculo integer primary KEY not null auto_increment,
    Marca varchar(255) not null,
    Modelo varchar(255) not null,
    Ano integer  not null ,
    Placa varchar(8) not null,
    IDCliente integer,
	FOREIGN KEY (IDCliente) REFERENCES Cliente (IDCliente)
);

CREATE TABLE ItensServiço (
    IDItemServico integer primary KEY not null auto_increment,
    IDServiço integer not null,
    Descrição varchar(255) not null,
    FOREIGN KEY (IDServiço) REFERENCES Serviço (IDServiço)
);
 
CREATE TABLE OrdemServiço (
    IDOrdemServico integer  not null PRIMARY KEY auto_increment,
    IDCliente integer  not null,
    IDVeiculo integer  not null,
    DataEntrada Datetime,
    DataConclusao Datetime,
    StatusOrdem varchar(255) not null,
    ObservaçõesAdicionais varchar(255) not null,
    FOREIGN KEY (IDVeiculo) REFERENCES Veiculo (IDVeiculo)
);

CREATE TABLE DetalheOrdemItem (
    IDOrdemItem  integer not null PRIMARY KEY auto_increment,
    IDOrdemServico  integer  not null,
    IDItemServico  integer  not null,
    QtdItemUsado  integer  not null,
    FOREIGN KEY (IDOrdemServico) REFERENCES OrdemServiço (IDOrdemServico),
    FOREIGN KEY (IDItemServico) REFERENCES ItensServiço (IDItemServico)
);

