create database exercicio5;
drop database exercicio5;
use exercicio5;

CREATE TABLE Loja (
    IDLoja integer PRIMARY KEY not null auto_increment,
    Nome varchar(255) not null,
    localizacao varchar(255) not null
);

CREATE TABLE Caminhao (
    IDCaminhao integer PRIMARY KEY not null auto_increment,
    VolumeTotal integer not null,
    PesoSuportado integer not null
);

CREATE TABLE Armazém (
    IDArmazem integer PRIMARY KEY not null auto_increment,
    Nome varchar(255) not null,
    Capacidade varchar(255) not null
);

CREATE TABLE Encomenda (
    IDEncomenda integer PRIMARY KEY not null auto_increment,
    Descricao varchar(255) not null,
    Peso integer not null,
    IDCaminhao integer not null,
    IDLoja integer not null,
    IDArmazem integer not null,
	FOREIGN KEY (IDArmazem) REFERENCES Armazém (IDArmazem),
	FOREIGN KEY (IDLoja) REFERENCES Loja (IDLoja),
    FOREIGN KEY (IDCaminhao) REFERENCES Caminhao (IDCaminhao)
);
