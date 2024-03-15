create or replace procedure person_select(myname in varchar2, o_cursor out sys_refcursor) 
is begin open o_cursor 
for 
select num,name,hp from simple_test_table where name=myname;
exception when others then dbms_output.put_line('sql_error' || sqlerrm);
end person_select;
/