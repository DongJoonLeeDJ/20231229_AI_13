call create_sequence('mytest'); #mytest라는 이름의 시퀀스 만드는 것처럼 보이게 한 것
select currval('mytest'); #mytest.currval 호출한 것처럼 보이게 하기
select nextval('mytest'); #mytest.nextval 호출한 것처럼 보이게 하기
select * from sequences;

call create_sequence('mvc_board');
insert into mvc_board(bid, bName, bTitle, bContent, bHit, bGroup, bStep, bIndent) values
(nextval('mvc_board'),'테스트이름','테스트제목','테스트중입니다.','0',currval('mvc_board'),0,0);
select * from mvc_board;





