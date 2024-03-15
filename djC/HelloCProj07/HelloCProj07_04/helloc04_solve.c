#include<stdio.h>
int main()
{
	int a, b;
	//printf("두 주사위 각각의 값?\n");
	//scanf("%d %d", &a,&b);
	printf("첫 번째 주사위 값?\n");
	scanf("%d", &a);
	printf("두 번째 주사위 값?\n");
	scanf("%d", &b);
	//예외가 되는 경우들
	//1. a나 b가 0이하이거나 7이상
	//2. a+b가 1이하이거나 13이상인 경우
	if (a <= 0 || b <= 0 || a > 6 || b > 6 || (a+b)<=1 || (a+b)>=13)
		printf("예외\n");
	else
	{
		if ((a + b) % 2 == 0)
			printf("두 눈의 합은 짝수!\n");
		else
			printf("두 눈의 합은 홀수!\n");
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
				printf("두 눈의 합 : 짝\n");
				break;
			case 3:
			case 5:
			case 7:
			case 9:
			case 11:
				printf("두 눈의 합 : 홀\n");
				break;
			default:
				printf("예외!!!\n");
				break;
			}
			break;
		default:
			printf("예외!");
			break;
		}
		break;

	default:
		printf("예외!");
		break;
	}

	printf("로또 번호! 보너스 번호 하나를 입력하세요(1~45)\n");
	int bns;
	scanf("%d", &bns);
	if (bns >= 1 && bns <= 10)
		printf("노란색!\n");
	else if (bns >= 11 && bns <= 20)
		printf("파란색!\n");
	else if (bns >= 21 && bns <= 30)
		printf("빨간색!\n");
	else if (bns >= 31 && bns <= 40)
		printf("검은색!\n");
	else if (bns >= 41 && bns <= 45)
		printf("초록색!\n");
	else
		printf("예외~~~\n");

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
		printf("노란색\n");
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
		printf("파란색\n");
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
		printf("빨간색\n");
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
		printf("검은색\n");
		system("color 0f");
		break;
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
		printf("검은색\n");
		system("color a");
		break;
	default:
		printf("예외!!!\n");
		system("color 35");
		break;
	}

	return 0;
}