create /*or replace*/ procedure delete_person(mynum in int) --create or replace : 기존에 프로시저 있으면 지우고 새로 만든다.
--create 만 쓰면 기존에 같은 이름의 프로시저가 있으면 안 만들어 짐
is begin 
    delete from simple_test_table where num=mynum;
end delete_person;
/
--만약 프로시저를 만든 그 워크스페이스에서 바로 테스트해보고 싶다면 end 밑에 /를 넣어야 함
exec delete_person(2);
select * from simple_test_table;
