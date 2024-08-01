use tb_oficina;

alter table cliente modify column id int not null auto_increment;
alter table fisico drop column id_cliente;
alter table juridico drop column id_cliente;
alter table ordemservico drop column id_cliente;

Insert Into cliente (id,nome,endereco,telefone) Values (1,"Joao Silva","Rua A 123 Cidade X", 419887788);
Insert Into cliente (id,nome,endereco,telefone) Values (2,"Maria Oliveira","Av. B, 456, Cidade Y", 12345);
Insert Into cliente (id,nome,endereco,telefone) Values (3,"Carlos Santos","Rua C, 789, Cidade Z", 6789);

Insert Into veiculo (id,marca,placa,modelo,ano,id_cliente) Values (1,"Ford","ABC-1234", "Fiesta",2018,1);
Insert Into veiculo (marca,placa,modelo,ano,id_cliente) Values ("Chevrolet,","DEF-5678", "Onix,",2020,1);
Insert Into veiculo (marca,placa,modelo,ano,id_cliente) Values ("Volkswagen,","GHI-9101", "Gol,",2019,2);
Insert Into veiculo (marca,placa,modelo,ano,id_cliente) Values ("Toyota","JKL-1122", "Corolla",2021,3);


Insert Into oficina (id,cnpj,nome) Values (1,1234567899, "eu");

Insert Into servico (id,descricao,preco,id_oficina) Values (1, "Troca de óleo",150.00,1);
Insert Into servico (descricao,preco,id_oficina) Values ("Troca de pneus",300.00,1);
Insert Into servico (descricao,preco,id_oficina) Values ("Reparo elétrico",180.00,1);
Insert Into servico (descricao,preco,id_oficina) Values ("Revisão periódica,",200.00,1);

insert Into ordemservico(id, data_entrada,data_conclusao,status,observacoes,id_cliente,id_oficina,id_veiculo,id_servico) values 
(1, "2024-07-15 12:00:00","2024-07-16 12:00:00","Concluída","a", 1,1,1,1),
(2,"2024-07-20 12:00:00", "2024-07-22 12:00:00", "Em andamento","a",2,1,3,2),
(3,"2024-07-25 12:00:00",null, "Em andamento","a",1,1,2,4),
(4,"2024-07-28 12:00:00","2024-07-30 12:00:00", "Em Concluída","a",3,1,4,3)




