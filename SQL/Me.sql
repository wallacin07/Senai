use exercicio2;

CREATE TABLE Munição (
    IDMunicao INTEGER PRIMARY KEY NOT NULL auto_increment,
    Descricao VARCHAR(255)
);

CREATE TABLE Arma (
    NumeroSerie int PRIMARY KEY NOT NULL,
    Tipo VARCHAR(255),
    Calibre VARCHAR(12),
    IDMunicao INTEGER,
    FOREIGN KEY (IDMunicao)  REFERENCES Munição (IDMunicao)
)DEFAULT CHARSET UTF8;

/* brModelo: */

CREATE TABLE Soldado (
    RM int PRIMARY KEY NOT NULL,
    Nome VARCHAR(255),
    DataNascimento DATE,
    NumeroSerie  int,
    FOREIGN KEY (NumeroSerie) REFERENCES Arma (NumeroSerie)
)DEFAULT CHARSET UTF8;

/* brModelo: */

CREATE TABLE Limpeza (
    IDLimpeza INTEGER PRIMARY KEY,
    RM int,
    NumeroSerie int,
    FOREIGN KEY (RM) References Soldado(RM),
    FOREIGN KEY (NumeroSerie) References Arma(NumeroSerie)
);

DROP TABLE Arma;
DROP TABLE Soldado;
DROP TABLE Munição;


