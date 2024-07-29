create database exercicio2;

use exercicio2;

CREATE TABLE PRODUTO (
    IDProduto INTEGER PRIMARY KEY NOT NULL auto_increment,
    NomeProduto VARCHAR(255),
    Tipo VARCHAR(6),
    Preco INTEGER,
    QtdEstoque INTEGER
);

CREATE TABLE Endereço (
    IDEndereco INTEGER PRIMARY KEY NOT NULL auto_increment,
    Rua VARCHAR(255),
    NumeroCasa INTEGER,
    Bairro VARCHAR(255),
    Cidade VARCHAR(255),
    Estado VARCHAR(255),
    Pais VARCHAR(255),
    Cep INTEGER
);

CREATE TABLE Cliente (
    IDCliente INTEGER PRIMARY KEY,
    RG VARCHAR(10),
    Nome VARCHAR(255),
    Telefone INTEGER,
    IDEndereco INTEGER, FOREIGN KEY (IDEndereco)
    REFERENCES Endereço (IDEndereco)
);

CREATE TABLE COMPRA (
    IDCompra INTEGER PRIMARY KEY,
    IDCliente INTEGER,
    IDProduto INTEGER,
    DataCompra DATE,
    Valor INTEGER,
     FOREIGN KEY (IDCliente) REFERENCES Cliente (IDCliente),
      FOREIGN KEY (IDProduto) REFERENCES PRODUTO (IDProduto)
)DEFAULT CHARSET UTF8;

DROP TABLE COMPRA;
DROP TABLE Cliente;
DROP TABLE PRODUTO;
DROP TABLE Endereço;


