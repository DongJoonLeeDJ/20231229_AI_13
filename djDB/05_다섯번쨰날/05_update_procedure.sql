-- 이름을 수정함과 동시에 ~~선생님으로 바꾸기
-- 이동준 => dj선생님
drop procedure update_person; --프로시저 지우는 법
/
create procedure update_person(mynum in int, newname in varchar2)
is tempvar varchar2(20) := '선생님'; --tempvar : 프로시저에서 사용될 변수, := 대입문
begin tempvar := newname || tempvar;  -- tempvar에 새로운 이름을 저장함, || : 글자 이어붙이기 기호, mysql에서는 ||이 or로 쓰임
update simple_test_table set name=tempvar where num=mynum;
end update_person;
/
select * from simple_test_table;
exec update_person(3, 'kpkim');
select * from simple_test_table;
