create database eva;

use eva;


create table empresa(
cnpj varchar(14) primary key,
empresa_nome varchar(40) not null,
email varchar(50) not null,
senha varchar(40) not null,
id_usuario int
);


create table usuario(
id_usuario int,
empresa_nome varchar(40),
nome_user varchar(40),
cpf varchar(9) not null
);

create table mensal(
cnpj varchar(14),
valor_kwh float,
gastos float,
economia float
);

create table dados(
intensidade float not null,
horas time,
lumens float not null,
dia date,
idsensor int,
area_sensor varchar(10)
);

create table sensores(
idsensor int primary key,
area_sensor varchar(10) not null
);


drop database eva;

describe mensal;