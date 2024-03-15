create table simple_test_table(
num int primary key,
name varchar2(30) not null,
hp varchar2(20) unique);

insert into simple_test_table values(1, '이동준', '010-2940-1613');
insert into simple_test_table values(2,'이유나',null);

select * from simple_test_table;

-- 프로시저를 콜(=호출)해서 데이터를 추가하는 것도 가능