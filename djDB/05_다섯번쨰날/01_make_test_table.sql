create table simple_test_table(
num int primary key,
name varchar2(30) not null,
hp varchar2(20) unique);

insert into simple_test_table values(1, '�̵���', '010-2940-1613');
insert into simple_test_table values(2,'������',null);

select * from simple_test_table;

-- ���ν����� ��(=ȣ��)�ؼ� �����͸� �߰��ϴ� �͵� ����