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


insert into myhakgwa(code, name) values('001', '��ǻ�Ͱ��а�');
insert into myhakgwa(code, name) values('002', '���ڰ��а�');
insert into myhakgwa(code, name) values('003', '������а�');
insert into myhakgwa(code, name) values('999', '����');
insert into mygwamok(code, hakgwacode, name) values ('C01', '001', 'C���α׷���');
insert into mygwamok(code, hakgwacode, name) values ('C02', '001', 'Java���α׷���');
insert into mygwamok(code, hakgwacode, name) values ('E01', '002', '���ڰ��а���');
insert into mygwamok(code, hakgwacode, name) values ('E02', '002', '����ȸ�α���');
insert into mygwamok(code, hakgwacode, name) values ('E11', '003', '������а���');
insert into mygwamok(code, hakgwacode, name) values ('A99', '999', '�۾������');


insert into mystu(hakbeon, name, hakgwacode,  hp) values (1, '�̵���','001', '010-2940-1613'); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (2, '�赿��','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (3, '�ֵ���','002',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (4, '�ڵ���','002',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (5, '������','003',null); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (6, '�嵿��','003',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (7, '������','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (8, '������','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (9, '�ߵ���','001',null); 
insert into mystu(hakbeon, name, hakgwacode,  hp) values (10, '�ѵ���','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (11, '������','001',null);
insert into mystu(hakbeon, name, hakgwacode,  hp) values (12, '������','001',null);

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

-- 10. 9�� ���̺��� ����� �˱� ���� ����Ѵ�.
--�� �л� �̸�, �� �̸�, ������ �̸��� ��� ���;� �Ѵ�.
select e.hakbeon �й�, m.name �̸�, h.name �а���, g.name �����, e.score ���� from examtable e join mystu m on 
e.hakbeon = m.hakbeon join myhakgwa h on e.hakgwacode=h.code join mygwamok g on e.gwamokcode=g.code;

--11. �� �л����� ��� ������ ����ؾ� �Ѵ�.
drop view totalresult;
create view totalresult as select e.hakbeon �й�, m.name �̸�, h.name �а���, g.name �����, e.score ���� from examtable e join mystu m on 
e.hakbeon = m.hakbeon join myhakgwa h on e.hakgwacode=h.code join mygwamok g on e.gwamokcode=g.code;
select * from totalresult;

drop view avgscores;
create view avgscores as  
select �й�, avg(����) ��� from totalresult group by �й�;

drop view stuavgtable;
create view stuavgtable as 
select t.�й�, t.�̸�, a.��� from totalresult t join avgscores a on t.�й�=a.�й�; 


--12. �� �л����� ��� ������ ���� A,B,C,D,F�� ����Ѵ�.
--0~49 : F
--60~69 : D
--70~79 : C
--80~89 : B
--90~ : A
--����) https://gent.tistory.com/311
select distinct �й�, �̸�, ��� from stuavgtable;


drop view stuavgtabledistinct;
create view stuavgtabledistinct as 
select distinct �й�, �̸�, ��� from stuavgtable;

select * from stuavgtabledistinct;

select �й�, �̸�, case when ��� >= 0.0 and ��� <=49.0 then 'F'
 when ��� >= 50.0 and ��� <70.0 then 'D'
 when ��� >= 70.0 and ��� <=79.0 then 'C'
 when ��� >= 80.0 and ��� <=89.0 then 'B'
 when ��� >= 90.0 and ��� <=100.0 then 'A'
 end as ���� from stuavgtabledistinct;
   /*
   select �й�, �̸�, case when ��� between 0 and 49 then 'F'
 when ��� >= 50.0 and ��� <70.0 then 'D'
 when ��� >= 70.0 and ��� <=79.0 then 'C'
 when ��� >= 80.0 and ��� <=89.0 then 'B'
 when ��� >= 90.0 and ��� <=100.0 then 'A'
 end as ���� from stuavgtabledistinct;
   */

--
--13. �а��� ��� ������ ����ؾ� �Ѵ�.
select * from totalresult;
select �а���, avg(����) ��� from totalresult group by �а���;


--14. �а��� ��� ������ ����ؾ� �Ѵ�.
select �а���, avg(����) ���, case when avg(����) >= 0.0 and avg(����) <=49.0 then 'F'
 when avg(����) >= 50.0 and avg(����) <70.0 then 'D'
 when avg(����) >= 70.0 and avg(����) <=79.0 then 'C'
 when avg(����) >= 80.0 and avg(����) <=89.0 then 'B'
 when avg(����) >= 90.0 and avg(����) <=100.0 then 'A'
 end as ������� from totalresult group by �а���;

--15. ��� ������ ���� ����� �л��� ����Ѵ�.
select * from stuavgtabledistinct where ��� = (select max(���) from stuavgtabledistinct);

drop view findfirststudent;
create view findfirststudent as select * from stuavgtabledistinct where ��� = (select max(���) from stuavgtabledistinct);

select * from findfirststudent;
--16. 15������ ���� �л��� �Ҽ� �а��� ���Ͻÿ�.
select distinct �а��� from findfirststudent join totalresult on findfirststudent.�й� = totalresult.�й�;




