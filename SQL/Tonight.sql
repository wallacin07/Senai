create database exercicio3;

use exercicio3;

CREATE TABLE Medico (
    CRM int PRIMARY KEY not null,
    Nome varchar(255) not null,
    Especialidade varchar(255) not null
);

/* brModelo: */

CREATE TABLE Paciente (
    RegistroHospitalar int PRIMARY KEY not null,
    Nome varchar(255) not null,
    Endereço varchar(255) not null,
    Telefone varchar(11) not null
);

/* brModelo: */

CREATE TABLE Medicamento (
    IDMedicamento int PRIMARY KEY not null,
    Descrição varchar(255) not null
);

/* brModelo: */

CREATE TABLE Receita (
    IDReceita PRIMARY KEY,
    IDMedicamento
);
 
ALTER TABLE Receita ADD CONSTRAINT FK_Receita_2
    FOREIGN KEY (IDConsulta)
    REFERENCES Consulta (IDConsulta)
    ON DELETE RESTRICT;
 

