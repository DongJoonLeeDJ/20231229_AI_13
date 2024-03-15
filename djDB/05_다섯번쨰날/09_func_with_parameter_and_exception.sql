-- 매개변수랑 리턴이 있는 함수
--함수를 만들기 전에 미리 해야할 수도 있는 작업 이 있다.
set serveroutput on; -- 안 해도 되는 자리도 있으나 이 걸 해야 원활하게 돌아갈 수 있다.
--exception 출력 위해서 함
/
create or replace function func_getperson(v_num int)
return varchar is v_name varchar2(100);
begin 
select name into v_name from simple_test_table where num=v_num;
return '찾으시는 사람의 이름 : ' ||  v_name;
exception when others then 
dbms_output.put_line('except :' || sqlcode || '):' || sqlerrm);
return '없음';
end;
/
select func_getperson(2) from dual;
select func_getperson(100) from dual;