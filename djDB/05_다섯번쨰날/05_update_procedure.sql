-- �̸��� �����԰� ���ÿ� ~~���������� �ٲٱ�
-- �̵��� => dj������
drop procedure update_person; --���ν��� ����� ��
/
create procedure update_person(mynum in int, newname in varchar2)
is tempvar varchar2(20) := '������'; --tempvar : ���ν������� ���� ����, := ���Թ�
begin tempvar := newname || tempvar;  -- tempvar�� ���ο� �̸��� ������, || : ���� �̾���̱� ��ȣ, mysql������ ||�� or�� ����
update simple_test_table set name=tempvar where num=mynum;
end update_person;
/
select * from simple_test_table;
exec update_person(3, 'kpkim');
select * from simple_test_table;
