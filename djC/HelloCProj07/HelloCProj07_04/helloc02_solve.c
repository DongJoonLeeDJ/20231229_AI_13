#include<stdio.h>
int main()
{
	//��� �� ���� ���̸� �Է¹޴´�.
	int a, b;
	printf("�� ����� ���� �Է��ϼ���.\n");
	scanf("%d %d", &a, &b);
	//ù ��° ����� ���̰� ������ Ȥ�� �׷��� �������� ���� ��� ��� �ٸ�
	//���� ������
	a > b ? printf("����!\n") : printf("���� �ƴ�\n");
	//if��
	if (a > b)
		printf("��!\n");
	else
		printf("���� �ƴѰ�?\n");

	//���׿�����
	a > b ? printf("����!!!\n") : (a == b ? printf("ģ��!\n") : printf("����!!\n"));

	//if ���1
	if (a > b)
		printf("��!!\n");
	else if (a == b)
		printf("ģ��!!!\n");
	else
		printf("����!!!\n");
	//if ���2
	if (a > b)
		printf("��~~~!\n");
	else
	{
		if (a == b)
			printf("ģ��!!~!!\n");
		else
			printf("����~!~!\n");
	}
	printf("������ ����� �����ΰ���?\n");
	int feel;
	scanf("%d", &feel);
	char f;
	if (feel >= -100 && feel <= 100)
	{
		if (feel < 0)
			f = '-';
		else if (feel == 0)
			f = '0';
		else
			f = '+';
	}
	else
	{
		f = '?';
		printf("�߸��� ��\n");
	}
	printf("��� : %c\n", f);

	f = (feel >= -100 && feel <= 100) ? (feel<0 ? '-' : (feel==0?'0':'+')) : '?';
	f == '?' ? printf("�߸��� ��\n") : printf("");
	printf("��� : %c\n", f);


	return 0;
}