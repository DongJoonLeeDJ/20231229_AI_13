#include<stdio.h>
#define ���� 0
#define ���� 1
#define �� 2

int main()
{
	int rcp1, rcp2;
	printf("���� ���� ��!(0,1,2 �� �ϳ�) rcp1\n");
	scanf("%d", &rcp1);
	printf("���� ���� ��!(0,1,2 �� �ϳ�) rcp2\n");
	scanf("%d", &rcp2);
	if (rcp1 % 3 == ����)
	{
		printf("����\n");
		if (rcp2 % 3 == ����)
		{
			printf("����, ���\n");

		}
		else if (rcp2 % 3 == ����)
		{
			printf("����, 1�ο� ��\n");

		}
		else if (rcp2 % 3 == ��)
		{
			printf("��, 1�ο� ��\n");

		}
		else //������ �Է��� ��� ���� ó��
		{
			printf("�߸��� ��! 1�ο� %d\n", rcp1);
			printf("�߸��� ��! 2�ο� %d\n", rcp2);
		}

	}
	else if (rcp1 % 3 == ����)
	{
		printf("����\n");
		if (rcp2 % 3 == ����)
		{
			printf("����, 1�ο� ��\n");

		}
		else if (rcp2 % 3 == ����)
		{
			printf("����, ���\n");

		}
		else if (rcp2 % 3 == ��)
		{
			printf("��, 1�ο� �й�\n");

		}
		else
		{
			printf("�߸��� ��! 1�ο� %d\n", rcp1);
			printf("�߸��� ��! 2�ο� %d\n", rcp2);
		}

	}
	else if (rcp1 % 3 == ��)
	{
		printf("��\n");
		if (rcp2 % 3 == ����)
		{
			printf("����, 1�ο� �й�\n");

		}
		else if (rcp2 % 3 == ����)
		{
			printf("����, 1�ο� ��\n");

		}
		else if (rcp2 % 3 == ��)
		{
			printf("��, ���\n");

		}
		else
		{
			printf("�߸��� ��! 1�ο� %d\n", rcp1);
			printf("�߸��� ��! 2�ο� %d\n", rcp2);
		}

	}
	else 
	{
		printf("�߸��� ��! 1�ο� %d\n", rcp1);
		printf("�߸��� ��! 2�ο� %d\n", rcp2);
	}

	switch (rcp1 % 3)
	{
	case 0:
		printf("����\n");
		switch (rcp2 % 3)
		{
		case 0:
			printf("����\n");
			printf("���\n");
			break;
		case 1:
			printf("����\n");
			printf("1�ο� �й�\n");
			break;
		case 2:
			printf("��\n");
			printf("1�ο� �¸�\n");
			break;

		default:
			printf("�߸��� ��! %d\n", rcp1);
			printf("�߸��� ��!(2) %d\n", rcp2);
			break;
		}
		break;
	case 1:
		printf("����\n");
		switch (rcp2 % 3)
		{
		case 0:
			printf("����\n");
			printf("1�ο� �¸�\n");
			break;
		case 1:
			printf("����\n");
			printf("���\n");
			break;
		case 2:
			printf("��\n");
			printf("1�ο� �й�\n");
			break;

		default:
			printf("�߸��� ��! %d\n", rcp1);
			printf("�߸��� ��!(2) %d\n", rcp2);
			break;
		}
		break;
	case 2:
		printf("��\n");

		switch (rcp2 % 3)
		{
		case 0:
			printf("����\n");
			printf("1�ο� �й�\n");
			break;
		case 1:
			printf("����\n");
			printf("1�ο� �¸�\n");
			break;
		case 2:
			printf("��\n");
			printf("���\n");
			break;

		default:
			printf("�߸��� ��! %d\n", rcp1);
			printf("�߸��� ��!(2) %d\n", rcp2);
			break;
		}
		break;

	default:
		printf("�߸��� ��!(1) %d\n", rcp1);
		printf("�߸��� ��!(2) %d\n", rcp2);

		break;
	}

	return 0;
}