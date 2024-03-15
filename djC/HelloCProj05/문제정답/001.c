#include<stdio.h>
int main()
{
	int month;
	printf("몇 월에 태어났나요?\n");
	scanf("%d", &month);
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울\n");
		break;

	case 3:
	case 4:
	case 5:
		printf("봄\n");
		break;


	case 6:
	case 7:
	case 8:
		printf("여름\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을\n");
		break;
	default:
		printf("%d는 잘못된 달입니다.\n", month);
		break;
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	return 0;
//}