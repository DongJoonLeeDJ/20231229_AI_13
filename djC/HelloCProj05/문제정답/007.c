#include<stdio.h>
//(����� �� ������ ��->��->ȣ����->�䳢->��->��->��->��->������->��->��->����)
int main()
{
	printf("�¾ ����?\n");
	int byear;
	scanf("%d", &byear);
	int gabja = byear % 10;
	int thee = byear % 12;

	if (gabja == 9)
		printf("��");
	else if (gabja == 0)
		printf("��");
	else if (gabja == 1)
		printf("��");
	else if (gabja == 2)
		printf("��");
	else if (gabja == 3)
		printf("��");
	else if (gabja == 4)
		printf("��");
	else if (gabja == 5)
		printf("��");
	else if (gabja == 6)
		printf("��");
	else if (gabja == 7)
		printf("��");
	else if (gabja == 8)
		printf("��");
	else
		printf("!!!");


	if (thee == 9)
		printf("��\n");
	else if (thee == 10)
		printf("��\n");
	else if (thee == 11)
		printf("��\n");
	else if (thee == 0)
		printf("��\n");
	else if (thee == 1)
		printf("��\n");
	else if (thee == 2)
		printf("��\n");
	else if (thee == 3)
		printf("��\n");
	else if (thee == 4)
		printf("��\n");
	else if (thee == 5)
		printf("��\n");
	else if (thee == 6)
		printf("��\n");
	else if (thee == 7)
		printf("��\n");
	else if (thee == 8)
		printf("��\n");
	else
		printf("???\n");







	switch (gabja)
	{
	case 9:
		printf("��");
		break;
	case 0:
		printf("��");
		break;
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	case 4:
		printf("��");
		break;
	case 5:
		printf("��");
		break;
	case 6:
		printf("��");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	default:
		printf("!!!\n");
		break;
	}



	switch (thee)
	{
	case 0:
		printf("��\n");

		break;
	case 1:
		printf("��\n");

		break;
	case 2:
		printf("��\n");

		break;
	case 3:
		printf("��\n");

		break;
	case 4:
		printf("��\n");

		break;
	case 5:
		printf("��\n");

		break;
	case 6:
		printf("��\n");

		break;
	case 7:
		printf("��\n");

		break;
	case 8:
		printf("��\n");

		break;
	case 9:
		printf("��\n");

		break;
	case 10:
		printf("��\n");

		break;
	case 11:
		printf("��\n");

		break;
	default:
		printf("???\n");

		break;
	}
	return 0;
}