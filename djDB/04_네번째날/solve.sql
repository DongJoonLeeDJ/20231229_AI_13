--1. 학생 테이블을 만든다.
--학번, 이름, 학과명, 나이, 연락처, 점수
--학번이 기본키이며, 이름은 생략할 수 없고, 연락처는 없을 수는 있으나, 있다면 중복되면 안 된다.
create table djdbstu
(
hakbeon char(3) primary key,
name varchar2(100) not null,
hakgwaname varchar2(100),
age int,
hp varchar2(15) unique,
score int
);


--2. 해당 테이블에 5개 이상의 데이터를 추가한다.
--학번 : 033, 이름 : 이동준, 학과명 : 컴퓨터 공학과, 나이: 35, 연락처:010-2940-1613, 점수 : 100
insert into djdbstu values('033', '이동준','컴퓨터공학과',35,'010-2940-1613',100);
insert into djdbstu(hakbeon,name,hakgwaname,score) values('034', '장순재','컴퓨터공학과',100);
insert into djdbstu(hakbeon,name,hakgwaname,score,hp) values('035', '박귀현','전자공학과',90,'111-2222-3333');
insert into djdbstu(hakbeon,name,hakgwaname,score,hp,age) values('036', '한형빈','컴퓨터공학과',80,null,35);
insert into djdbstu(hakbeon,name,hakgwaname,score) values('037', '추형욱','전자공학과',70);

--3. 점수 순서대로 출력한다.
-- 순서대로 출력하는 키워드 : order by, order : 주문, 순서라는 뜻을 가진 영단어
select * from djdbstu;
select * from djdbstu order by score asc; --오름 차순 정렬, asc 생략해도 오름차순 정렬이 됨
select * from djdbstu order by score desc; --내림 차순 정렬, 내림 차순 정렬을 원할 경우 반드시 작성해야 하는 부분임!

--4. 학과별 평균 점수를 구해본다.
select hakgwaname, avg(score) avgscore from djdbstu group by hakgwaname;
select hakgwaname, round(avg(score),2) avgscore from djdbstu group by hakgwaname; --round:반올림 함수

--5-1. 학과별 학과의 과탑을 출력한다.
select hakgwaname, max(score) maxscore from djdbstu group by hakgwaname;
create view showTopGwa as select hakgwaname, max(score) maxscore from djdbstu group by hakgwaname;
select hakbeon, name, maxscore, djdbstu.hakgwaname from djdbstu join showTopGwa on djdbstu.score = showTopGwa.maxscore;

--5-2. 평균 점수가 가장 높은 학과를 출력한다.
create view showAvgGwa as select hakgwaname, avg(score) avgscore from djdbstu group by hakgwaname;
select * from showAvgGwa;
select hakgwaname from showAvgGwa where avgscore = (select max(avgscore) from showAvgGwa);

--5-3. 점수가 가장 높은 학생이 있는 학과를 출력한다.
select hakgwa from dbstu where score = (select max(score) from dbstu);






