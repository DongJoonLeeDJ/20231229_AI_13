#include<stdio.h>
int main()
{
	int a, b;
	//printf("�� �ֻ��� ������ ��?\n");
	//scanf("%d %d", &a,&b);
	printf("ù ��° �ֻ��� ��?\n");
	scanf("%d", &a);
	printf("�� ��° �ֻ��� ��?\n");
	scanf("%d", &b);
	//���ܰ� �Ǵ� ����
	//1. a�� b�� 0�����̰ų� 7�̻�
	//2. a+b�� 1�����̰ų� 13�̻��� ���
	if (a <= 0 || b <= 0 || a > 6 || b > 6 || (a+b)<=1 || (a+b)>=13)
		printf("����\n");
	else
	{
		if ((a + b) % 2 == 0)
			printf("�� ���� ���� ¦��!\n");
		else
			printf("�� ���� ���� Ȧ��!\n");
	}

	switch (a)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		switch (b)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (a+b)
			{
			case 2:
			case 4:
			case 6:
			case 8:
			case 10:
			case 12:
				printf("�� ���� �� : ¦\n");
				break;
			case 3:
			case 5:
			case 7:
			case 9:
			case 11:
				printf("�� ���� �� : Ȧ\n");
				break;
			default:
				printf("����!!!\n");
				break;
			}
			break;
		default:
			printf("����!");
			break;
		}
		break;

	default:
		printf("����!");
		break;
	}

	printf("�ζ� ��ȣ! ���ʽ� ��ȣ �ϳ��� �Է��ϼ���(1~45)\n");
	int bns;
	scanf("%d", &bns);
	if (bns >= 1 && bns <= 10)
		printf("�����!\n");
	else if (bns >= 11 && bns <= 20)
		printf("�Ķ���!\n");
	else if (bns >= 21 && bns <= 30)
		printf("������!\n");
	else if (bns >= 31 && bns <= 40)
		printf("������!\n");
	else if (bns >= 41 && bns <= 45)
		printf("�ʷϻ�!\n");
	else
		printf("����~~~\n");

	switch (bns)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		printf("�����\n");
		system("color 6");
		break;
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		printf("�Ķ���\n");
		system("color 1f");
		break;

	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
		printf("������\n");
		system("color 4f");
		break;
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
		printf("������\n");
		system("color 0f");
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		printf("������\n");
		system("color a");
		break;
	default:
		printf("����!!!\n");
		system("color 35");
		break;
	}

	return 0;
}