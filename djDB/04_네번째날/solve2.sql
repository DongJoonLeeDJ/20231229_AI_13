drop table examtable;
drop table mystu;
drop table mygwamok;
drop table myhakgwa;
create table myhakgwa ( code char(3), name varchar2(100), CONSTRAINT constraint_name PRIMARY KEY(code));

create table mygwamok(code char(3), hakgwacode char(3), name varchar2(100));
ALTER TABLE mygwamok
ADD CONSTRAINT constraint_gwamokpk PRIMARY KEY (code);
alter table mygwamok 
ADD CONSTRAINT constraint_gwamokfk foreign key (hakgwacode) references myhakgwa(code);

create table mystu
(
hakbeon int primary key,
name varchar2(100) not null,
hakgwacode char(3) references myhakgwa(code),
hp varchar2(100) unique
);
select * from mystu;
select * from mygwamok;
select * from myhakgwa;

drop sequence myexamcount;
create sequence myexamcount;
drop table examtable;
create table examtable
(
exseq int default myexamcount.nextval primary key,
hakbeon int references mystu(hakbeon),
hakgwacode char(3) references myhakgwa(code),
gwamokcode char(3) references mygwamok(code),
score int not null,
regdate timestamp default sysdate
);


insert into myhakgwa(code, name) values('001', '컴퓨터공학과');
insert into myhakgwa(code, name) values('002', '전자공학과');
insert into myhakgwa(code, name) values('003', '전기공학과');
insert into myhakgwa(code, name) values('999', '공통');
insert into mygwamok(code, hakgwacode, name) values ('C01', '001', 'C프로그래밍');
insert into mygwamok(code, hakgwacode, name) values ('C02', '001', 'Java프로그래밍');
insert into mygwamok(code, hakgwacode, name) values ('E01', '002', '전자공학개론');
insert into mygwamok(code, hakgwacode, name) values ('E02', '002', '전자회로기초');
insert into mygwamok(code, hakgwacode, name) values ('E11', '003', '전기공학개론');
insert into mygwamok(code, hakgwacode, name) values ('A99', '999', '글쓰기기초');


insert into mystu(hakbeon, name, hakgwacode,  hp) values (1, '이동준','001', '010-2940-1613'); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (2, '김동준','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (3, '최동준','002',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (4, '박동준','002',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (5, '진동준','003',null); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (6, '장동준','003',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (7, '조동준','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (8, '구동준','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (9, '추동준','001',null); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (10, '한동준','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (11, '차동준','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (12, '정동준','001',null);

select  * from mystu;
select * from myhakgwa;
select * from mygwamok;
select * from examtable;

insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (1, (select hakgwacode from mystu where hakbeon=1), 'C01', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (2, (select hakgwacode from mystu where hakbeon=2), 'C01', 90);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (3, (select hakgwacode from mystu where hakbeon=3), 'C01', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (4, (select hakgwacode from mystu where hakbeon=4), 'C01', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (5, (select hakgwacode from mystu where hakbeon=5), 'C01', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (1, (select hakgwacode from mystu where hakbeon=1), 'C02', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (2, (select hakgwacode from mystu where hakbeon=2), 'C02', 50);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (3, (select hakgwacode from mystu where hakbeon=3), 'E01', 44);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (4, (select hakgwacode from mystu where hakbeon=4), 'E01', 60);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (5, (select hakgwacode from mystu where hakbeon=5), 'E01', 70);



insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (6, (select hakgwacode from mystu where hakbeon=6), 'E02', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (7, (select hakgwacode from mystu where hakbeon=7), 'E02', 90);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (8, (select hakgwacode from mystu where hakbeon=8), 'E11', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (9, (select hakgwacode from mystu where hakbeon=9), 'E11', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (10, (select hakgwacode from mystu where hakbeon=10), 'E11', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (11, (select hakgwacode from mystu where hakbeon=11), 'E11', 80);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (12, (select hakgwacode from mystu where hakbeon=12), 'E11', 50);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (3, (select hakgwacode from mystu where hakbeon=3), 'E11', 44);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (4, (select hakgwacode from mystu where hakbeon=4), 'E11', 60);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (5, (select hakgwacode from mystu where hakbeon=5), 'E11', 70);



insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (1, (select hakgwacode from mystu where hakbeon=1), 'A99', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (2, (select hakgwacode from mystu where hakbeon=2), 'A99', 89);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (3, (select hakgwacode from mystu where hakbeon=3), 'A99', 79);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (4, (select hakgwacode from mystu where hakbeon=4), 'A99', 69);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (5, (select hakgwacode from mystu where hakbeon=5), 'A99', 59);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (6, (select hakgwacode from mystu where hakbeon=6), 'A99', 49);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (7, (select hakgwacode from mystu where hakbeon=7), 'A99', 10);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (8, (select hakgwacode from mystu where hakbeon=8), 'A99', 0);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (9, (select hakgwacode from mystu where hakbeon=9), 'A99', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (10, (select hakgwacode from mystu where hakbeon=10), 'A99', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (11, (select hakgwacode from mystu where hakbeon=11), 'A99', 100);
insert into examtable(hakbeon, hakgwacode, gwamokcode, score) values (12, (select hakgwacode from mystu where hakbeon=12), 'A99', 100);

-- 10. 9번 테이블의 결과를 알기 쉽게 출력한다.
--즉 학생 이름, 과 이름, 교과목 이름이 모두 나와야 한다.
select e.hakbeon 학번, m.name 이름, h.name 학과명, g.name 과목명, e.score 점수 from examtable e join mystu m on 
e.hakbeon = m.hakbeon join myhakgwa h on e.hakgwacode=h.code join mygwamok g on e.gwamokcode=g.code;

--11. 각 학생들의 평균 점수를 출력해야 한다.
drop view totalresult;
create view totalresult as select e.hakbeon 학번, m.name 이름, h.name 학과명, g.name 과목명, e.score 점수 from examtable e join mystu m on 
e.hakbeon = m.hakbeon join myhakgwa h on e.hakgwacode=h.code join mygwamok g on e.gwamokcode=g.code;
select * from totalresult;

drop view avgscores;
create view avgscores as  
select 학번, avg(점수) 평균 from totalresult group by 학번;

drop view stuavgtable;
create view stuavgtable as 
select t.학번, t.이름, a.평균 from totalresult t join avgscores a on t.학번=a.학번; 


--12. 각 학생들의 평균 점수에 따라서 A,B,C,D,F를 출력한다.
--0~49 : F
--60~69 : D
--70~79 : C
--80~89 : B
--90~ : A
--참고) https://gent.tistory.com/311
select distinct 학번, 이름, 평균 from stuavgtable;


drop view stuavgtabledistinct;
create view stuavgtabledistinct as 
select distinct 학번, 이름, 평균 from stuavgtable;

select * from stuavgtabledistinct;

select 학번, 이름, case when 평균 >= 0.0 and 평균 <=49.0 then 'F'
 when 평균 >= 50.0 and 평균 <70.0 then 'D'
 when 평균 >= 70.0 and 평균 <=79.0 then 'C'
 when 평균 >= 80.0 and 평균 <=89.0 then 'B'
 when 평균 >= 90.0 and 평균 <=100.0 then 'A'
 end as 학점 from stuavgtabledistinct;
   /*
   select 학번, 이름, case when 평균 between 0 and 49 then 'F'
 when 평균 >= 50.0 and 평균 <70.0 then 'D'
 when 평균 >= 70.0 and 평균 <=79.0 then 'C'
 when 평균 >= 80.0 and 평균 <=89.0 then 'B'
 when 평균 >= 90.0 and 평균 <=100.0 then 'A'
 end as 학점 from stuavgtabledistinct;
   */

--
--13. 학과별 평균 점수를 출력해야 한다.
select * from totalresult;
select 학과명, avg(점수) 평균 from totalresult group by 학과명;


--14. 학과별 평균 학점을 출력해야 한다.
select 학과명, avg(점수) 평균, case when avg(점수) >= 0.0 and avg(점수) <=49.0 then 'F'
 when avg(점수) >= 50.0 and avg(점수) <70.0 then 'D'
 when avg(점수) >= 70.0 and avg(점수) <=79.0 then 'C'
 when avg(점수) >= 80.0 and avg(점수) <=89.0 then 'B'
 when avg(점수) >= 90.0 and avg(점수) <=100.0 then 'A'
 end as 평균학점 from totalresult group by 학과명;

--15. 평균 성적이 가장 우수한 학생을 출력한다.
select * from stuavgtabledistinct where 평균 = (select max(평균) from stuavgtabledistinct);

drop view findfirststudent;
create view findfirststudent as select * from stuavgtabledistinct where 평균 = (select max(평균) from stuavgtabledistinct);

select * from findfirststudent;
--16. 15번에서 구한 학생의 소속 학과를 구하시오.
select distinct 학과명 from findfirststudent join totalresult on findfirststudent.학번 = totalresult.학번;




