select version(); #mysql 버전
create database myjsp;
use myjsp;
create table djemp
(num int primary key,
name varchar(45) not null);
insert into djemp values (1,'이동준');
select * from djemp;

#암호 저장용 컬럼
alter table djemp add column pw varchar(100);
delete from djemp;

