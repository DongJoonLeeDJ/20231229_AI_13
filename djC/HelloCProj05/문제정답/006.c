#include<stdio.h>
//(����� �� ������ ��->��->ȣ����->�䳢->��->��->��->��->������->��->��->����)
int main()
{
	printf("�¾ ����?\n");
	int byear;
	scanf("%d", &byear);
	byear = byear % 12;
	if (byear == 9)
		printf("���\n");
	else if (byear == 10)
		printf("����\n");
	else if (byear == 11)
		printf("���\n");
	else if (byear == 0)
		printf("�����̶�\n");
	else if (byear == 1)
		printf("�߶�\n");
	else if (byear == 2)
		printf("����\n");
	else if (byear == 3)
		printf("������\n");
	else if (byear == 4)
		printf("���\n");
	else if (byear == 5)
		printf("�Ҷ�\n");
	else if (byear == 6)
		printf("ȣ���̶�\n");
	else if (byear == 7)
		printf("�䳢��\n");
	else if (byear == 8)
		printf("���\n");
	else
		printf("???\n");


	switch (byear)
	{
	case 0:
		printf("�����̶�\n");

		break;
	case 1:
		printf("�߶�\n");

		break;
	case 2:
		printf("����\n");

		break;
	case 3:
		printf("������\n");

		break;
	case 4:
		printf("���\n");

		break;
	case 5:
		printf("�Ҷ�\n");

		break;
	case 6:
		printf("ȣ���̶�\n");

		break;
	case 7:
		printf("�䳢��\n");

		break;
	case 8:
		printf("���\n");

		break;
	case 9:
		printf("���\n");

		break;
	case 10:
		printf("����\n");

		break;
	case 11:
		printf("���\n");

		break;
	default:
		printf("???\n");

		break;
	}
	return 0;
}