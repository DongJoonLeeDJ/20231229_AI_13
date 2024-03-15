create or replace procedure add_person
(
mynum in int,
myname varchar2,
myhp varchar2
)
is begin 
insert into simple_test_table values(mynum,myname,myhp);
end add_person;