-- 함수
-- 프로시저랑 매우 유사한 개념
-- 프로시저 안에 함수가 들어간다고 보면 됨

create or replace function mytest_func return varchar IS V_Test varchar2(100);
begin 
v_test :='선생님';
return v_test;
end;
/
create or replace procedure add_person_func
(
mynum in int,
myname varchar2,
myhp varchar2
)
is begin 
insert into simple_test_table values(mynum,myname || mytest_func(),myhp);
end add_person_func;
/
select mytest_func() from dual;
select * from simple_test_table;
exec add_person(5,'노용천',null);
exec add_person_func(6,'한형빈',null);
exec add_person(7,'추형욱',null);
exec add_person(8,'조민석',null);
