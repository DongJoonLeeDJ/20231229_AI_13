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
exec add_person(2,'ÀÌÀ¯³ª',null);
select * from for_triger;