-- �Լ�
-- ���ν����� �ſ� ������ ����
-- ���ν��� �ȿ� �Լ��� ���ٰ� ���� ��

create or replace function mytest_func return varchar IS V_Test varchar2(100);
begin 
v_test :='������';
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
exec add_person(5,'���õ',null);
exec add_person_func(6,'������',null);
exec add_person(7,'������',null);
exec add_person(8,'���μ�',null);
