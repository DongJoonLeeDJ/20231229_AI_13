-- �Ű������� ������ �ִ� �Լ�
--�Լ��� ����� ���� �̸� �ؾ��� ���� �ִ� �۾� �� �ִ�.
set serveroutput on; -- �� �ص� �Ǵ� �ڸ��� ������ �� �� �ؾ� ��Ȱ�ϰ� ���ư� �� �ִ�.
--exception ��� ���ؼ� ��
/
create or replace function func_getperson(v_num int)
return varchar is v_name varchar2(100);
begin 
select name into v_name from simple_test_table where num=v_num;
return 'ã���ô� ����� �̸� : ' ||  v_name;
exception when others then 
dbms_output.put_line('except :' || sqlcode || '):' || sqlerrm);
return '����';
end;
/
select func_getperson(2) from dual;
select func_getperson(100) from dual;