#include<stdio.h>
int main()
{
	int month;
	printf("�� ���� �¾����?\n");
	scanf("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;

	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;


	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	default:
		printf("%d�� �߸��� ���Դϴ�.\n", month);
		break;
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	return 0;
//}