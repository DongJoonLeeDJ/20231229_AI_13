#include<stdio.h>
#include"myheader3.h"
//����ü : ����� ���� �ڷ���
//int�� double, char���� �� �ϳ��� ���� ���� ����
//int�迭, double�迭, char�迭���� �� �� ������ ���� ���� ����
//����ü�� �̿��ϸ� ���� �ϳ��� ���� ������ �����͸� ���� ����
//�л� ������ó�� �̸�,�й�,��,��,�� ������ �ʿ���
//�������� �����͸� ���� �� �ִ�.
struct Student
{
	char name[100];
	char num[100];
	int math;
	int eng;
	int kor;
};
int main()
{
	struct Student dj = {.name="�̵���",.num="09",.math=50,.kor=70,.eng=30};
	//�Է��ϴ� �� �ٸ� �������̶� �Ȱ��� �ϸ� �� ������ �Ǽ��� scanf
	//���ڿ��� gets���� ��
	printf("�̸��� ������?\n");
	gets(dj.name);
	printf("�� �л��� �̸� : %s\n", dj.name);
	printf("�� �л��� ��ȣ : %s\n", dj.num);
	printf("�� �л��� ������ : %d %d %d\n", dj.math, dj.kor, dj.eng);
	dj.math = 100;
	//���� ������ �� �ٸ� �� �Ϲ����� ���Թ� ���� �� ���ڿ��� strcpy��� �� ��� ��
	strcpy(dj.name, "���μ�"); //dj.name="���μ�"; �̷��� �ϸ� �� ��
	printf("�� �л��� �̸� : %s\n", dj.name);
	printf("�� �л��� ������ : %d %d %d\n", dj.math, dj.kor, dj.eng);

	//�տ� struct�� ���� �ʿ����
	KBStudent hb = {.age=35,.gen='M',.name="������",.snum="08"};



	return 0;
}