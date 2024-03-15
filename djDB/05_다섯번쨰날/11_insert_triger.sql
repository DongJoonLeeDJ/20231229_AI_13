drop trigger tr_test;
/
create or replace trigger tr_test 
before insert on simple_test_table 
for each row 
begin 
if inserting then insert into for_triger(name) values(:new.name);
end if;
end tr_test;
/
exec add_person(100,'장순재',null); 
exec add_person(55,'이동준',null); 
exec add_person(20,'이지환',null); 
select * from for_triger;
select * from simple_test_table;
