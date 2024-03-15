-- 트리거 : 특정 명령이 내려졌을 때 수행되는 프로시저
-- 수정이 될 수 있고 삽입이 될 수 있고 삭제가 될 수도 있음...
drop sequence tricount;
drop table for_triger;
create sequence tricount;
create table for_triger(num int default tricount.nextval primary key, regtime timestamp default sysdate, name varchar2(100));
