#include<stdio.h>
int main()
{
	printf("���̴�?\n");
	int age;
	scanf("%d", &age);
	if (age < 0)
	{
		printf("%d�� �߸��� ��!\n", age);
	}
	else
	{
		switch (age/10)
		{
		case 0: //0~9 => 10���� ������ �� 0
			printf("�ֱ�\n");
			break;
		case 1: //10~19 => 10���� ������ �� : 1
			printf("û�ҳ�\n");

			break;
		case 2:
		case 3: //20~39 => 10���� ������ ���� 2 Ȥ�� 3
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("������ ���\n");
			break;
		default:
			printf("Ÿ�뽺\n");
			break;
		}
	}
	if (age < 0/* || age >= 100*/)
		printf("Ÿ�뽺!!\n");
	else if (age >= 0 && age <= 9)
		printf("�ֱ�!!\n");
	else if (age >= 10 && age <= 19)
		printf("û�ҳ�!!\n");
	else if (age >= 20 && age <= 39)
		printf("������!!\n");
	else if (age >= 40 && age <= 49)
		printf("������!!\n");
	else if (age >= 50 && age <= 99)
		printf("������ ���!!\n");
	else
		printf("Ÿ�뽺!!\n");//100�� �̻� 
	//else if....
	//else
	//{
	//	if....
	//}
	

	return 0;
}