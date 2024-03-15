#include<stdio.h>
int main()
{
	printf("나이는?\n");
	int age;
	scanf("%d", &age);
	if (age < 0)
	{
		printf("%d는 잘못된 값!\n", age);
	}
	else
	{
		switch (age/10)
		{
		case 0: //0~9 => 10으로 나누면 몫 0
			printf("애기\n");
			break;
		case 1: //10~19 => 10으로 나누면 몫 : 1
			printf("청소년\n");

			break;
		case 2:
		case 3: //20~39 => 10으로 나누면 몫은 2 혹은 3
			printf("젊은이\n");
			break;
		case 4:
			printf("멋쟁이\n");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			printf("지혜의 등대\n");
			break;
		default:
			printf("타노스\n");
			break;
		}
	}
	if (age < 0/* || age >= 100*/)
		printf("타노스!!\n");
	else if (age >= 0 && age <= 9)
		printf("애기!!\n");
	else if (age >= 10 && age <= 19)
		printf("청소년!!\n");
	else if (age >= 20 && age <= 39)
		printf("젊은이!!\n");
	else if (age >= 40 && age <= 49)
		printf("멋쟁이!!\n");
	else if (age >= 50 && age <= 99)
		printf("지혜의 등대!!\n");
	else
		printf("타노스!!\n");//100살 이상 
	//else if....
	//else
	//{
	//	if....
	//}
	

	return 0;
}