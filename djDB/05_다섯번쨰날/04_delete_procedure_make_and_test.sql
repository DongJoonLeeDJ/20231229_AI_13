create /*or replace*/ procedure delete_person(mynum in int) --create or replace : ������ ���ν��� ������ ����� ���� �����.
--create �� ���� ������ ���� �̸��� ���ν����� ������ �� ����� ��
is begin 
    delete from simple_test_table where num=mynum;
end delete_person;
/
--���� ���ν����� ���� �� ��ũ�����̽����� �ٷ� �׽�Ʈ�غ��� �ʹٸ� end �ؿ� /�� �־�� ��
exec delete_person(2);
select * from simple_test_table;
