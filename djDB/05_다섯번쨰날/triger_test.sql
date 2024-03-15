drop sequence tricount;
drop table for_triger;
create sequence tricount;
create table for_triger(num int default tricount.nextval primary key, regtime timestamp default sysdate, name varchar2(100));
