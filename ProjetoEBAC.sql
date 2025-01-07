create table usuarios
(
cpf integer,
  nome varchar(50),
  sobrenome varchar(50),
  cargo varchar(50),
  curso_id integer
);

create table cursos
    (
    id integer,
    nome_curso varchar(50),
    professor varchar(50),
    categoria varchar(50)
    );

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('123', 'Rafael', 'Mendes', 'Aluno', '2');

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('1123', 'Rafael', 'Bezerra', 'Aluno', '2');

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('1234', 'Gabriel', 'Silva', 'Aluno', '2');

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('12345', 'Jean', 'Gordo', 'Aluno', '1');

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('123456', 'Felipe', 'Lima', 'Aluno', '1');

insert into usuarios (cpf,nome,sobrenome,cargo,curso_id)
values ('124567', 'Hariel', 'Lucca', 'Professor', '1');

insert into cursos(id, nome_curso, professor, categoria)
values('1', 'Python', 'Paloma F', 'Programa');

insert into cursos(id, nome_curso, professor, categoria)
values('2', 'UX', 'Paulo C', 'Designer');

/*update usuarios
   set curso_id = '1'
where cpf = '1123';

select * from usuarios
where nome = 'Rafael';*/

select * from usuarios;
