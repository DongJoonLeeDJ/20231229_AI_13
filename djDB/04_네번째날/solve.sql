--1. �л� ���̺��� �����.
--�й�, �̸�, �а���, ����, ����ó, ����
--�й��� �⺻Ű�̸�, �̸��� ������ �� ����, ����ó�� ���� ���� ������, �ִٸ� �ߺ��Ǹ� �� �ȴ�.
create table djdbstu
(
hakbeon char(3) primary key,
name varchar2(100) not null,
hakgwaname varchar2(100),
age int,
hp varchar2(15) unique,
score int
);


--2. �ش� ���̺� 5�� �̻��� �����͸� �߰��Ѵ�.
--�й� : 033, �̸� : �̵���, �а��� : ��ǻ�� ���а�, ����: 35, ����ó:010-2940-1613, ���� : 100
insert into djdbstu values('033', '�̵���','��ǻ�Ͱ��а�',35,'010-2940-1613',100);
insert into djdbstu(hakbeon,name,hakgwaname,score) values('034', '�����','��ǻ�Ͱ��а�',100);
insert into djdbstu(hakbeon,name,hakgwaname,score,hp) values('035', '�ڱ���','���ڰ��а�',90,'111-2222-3333');
insert into djdbstu(hakbeon,name,hakgwaname,score,hp,age) values('036', '������','��ǻ�Ͱ��а�',80,null,35);
insert into djdbstu(hakbeon,name,hakgwaname,score) values('037', '������','���ڰ��а�',70);

--3. ���� ������� ����Ѵ�.
-- ������� ����ϴ� Ű���� : order by, order : �ֹ�, ������� ���� ���� ���ܾ�
select * from djdbstu;
select * from djdbstu order by score asc; --���� ���� ����, asc �����ص� �������� ������ ��
select * from djdbstu order by score desc; --���� ���� ����, ���� ���� ������ ���� ��� �ݵ�� �ۼ��ؾ� �ϴ� �κ���!

--4. �а��� ��� ������ ���غ���.
select hakgwaname, avg(score) avgscore from djdbstu group by hakgwaname;
select hakgwaname, round(avg(score),2) avgscore from djdbstu group by hakgwaname; --round:�ݿø� �Լ�

--5-1. �а��� �а��� ��ž�� ����Ѵ�.
select hakgwaname, max(score) maxscore from djdbstu group by hakgwaname;
create view showTopGwa as select hakgwaname, max(score) maxscore from djdbstu group by hakgwaname;
select hakbeon, name, maxscore, djdbstu.hakgwaname from djdbstu join showTopGwa on djdbstu.score = showTopGwa.maxscore;

--5-2. ��� ������ ���� ���� �а��� ����Ѵ�.
create view showAvgGwa as select hakgwaname, avg(score) avgscore from djdbstu group by hakgwaname;
select * from showAvgGwa;
select hakgwaname from showAvgGwa where avgscore = (select max(avgscore) from showAvgGwa);

--5-3. ������ ���� ���� �л��� �ִ� �а��� ����Ѵ�.
select hakgwa from dbstu where score = (select max(score) from dbstu);






