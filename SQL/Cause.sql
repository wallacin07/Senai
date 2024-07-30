Create database Exercicio4;
Drop database Exercicio4;
use Exercicio4;

CREATE TABLE Professor (
    NomeProfessor varchar(255) PRIMARY KEY not null,
    SobrenomeProfessor varchar(255) not null,
    Telefone varchar(11) not null
);

CREATE TABLE Aluno (
    IDAluno integer PRIMARY KEY not null auto_increment,
    Nome varchar(255) not null,
    Telefone varchar(11) not null,
    Convenio varchar(255) not null,
    Idade Integer not null,
    Sexo char(1) not null
);

CREATE TABLE Modalidade (
    IDModalidade integer PRIMARY KEY not null auto_increment,
    Descrição varchar(255) not null
);

CREATE TABLE Aula (
    IDAula integer PRIMARY KEY not null auto_increment,
    NivelDificuldade varchar(255) not null,
    IDModalidade integer  not null,
    NomeProfessor varchar(255)  not null,
    IDAluno integer not null,
	FOREIGN KEY (NomeProfessor) REFERENCES Professor (NomeProfessor),
    FOREIGN KEY (IDAluno) REFERENCES Aluno (IDAluno),
    FOREIGN KEY (IDModalidade) REFERENCES Modalidade (IDModalidade)
);
