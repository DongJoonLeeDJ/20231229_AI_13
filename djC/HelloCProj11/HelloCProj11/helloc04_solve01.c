#include<stdio.h>
//�Լ��� ��� ���� ���Ǹ� ������ ����
int calcMyAge(int now, int birth);
void printMyAge(int, int);
int calcDjAge();
void printDjAge();
int main()
{
	printf("���� : %d��\n", calcMyAge(2024, 1989));
	printMyAge(2024, 1989);
	printf("�̵��� ���� : %d\n", calcDjAge());
	printDjAge();

	return 0;
}
//�ؿ��ٰ� ���� ����� ��� ������ �� �ִ�.
int calcMyAge(int now, int birth)
{
	if (birth > now) //���� �� �ٲ�
	{
		int temp = now;
		now = birth;
		birth = now;
	}
	return now - birth;
}
void printMyAge(int now, int birth)
{
	if (now - birth < 0)
		printf("�Ű������� �߸��ƽ��ϴ�\n");
	else
		printf("���� : %d\n", now - birth);
}
int calcDjAge()
{
	return 2024 - 1989;
}
void printDjAge()
{
	printf("�̵��� ���� : %d��\n", 2024 - 1989);
}