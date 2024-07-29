create database db_aula;

Use db_aula;
show databases;
show tables;
CREATE TABLE aluno (
    id_aluno INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(60) NOT NULL
)  DEFAULT CHARSET UTF8;

create table turma(ID_Turma int not null auto_increment primary key,
id_aluno int, 
id_professor int,
foreign key (id_professor) references professor(id_professor),
foreign key (id_aluno) references aluno(id_aluno)
)  DEFAULT CHARSET UTF8;

CREATE TABLE professor (
    id_professor INT NOT NULL PRIMARY KEY AUTO_INCREMENT,
    nome VARCHAR(50) NOT NULL,
    sobrenome VARCHAR(60) NOT NULL
)  DEFAULT CHARSET UTF8;

select *id_aluno