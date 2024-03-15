#include<stdio.h>
#define 가위 0
#define 바위 1
#define 보 2

int main()
{
	int rcp1, rcp2;
	printf("가위 바위 보!(0,1,2 중 하나) rcp1\n");
	scanf("%d", &rcp1);
	printf("가위 바위 보!(0,1,2 중 하나) rcp2\n");
	scanf("%d", &rcp2);
	if (rcp1 % 3 == 가위)
	{
		printf("가위\n");
		if (rcp2 % 3 == 가위)
		{
			printf("가위, 비김\n");

		}
		else if (rcp2 % 3 == 바위)
		{
			printf("바위, 1인용 패\n");

		}
		else if (rcp2 % 3 == 보)
		{
			printf("보, 1인용 승\n");

		}
		else //음수를 입력한 경우 예외 처리
		{
			printf("잘못된 값! 1인용 %d\n", rcp1);
			printf("잘못된 값! 2인용 %d\n", rcp2);
		}

	}
	else if (rcp1 % 3 == 바위)
	{
		printf("바위\n");
		if (rcp2 % 3 == 가위)
		{
			printf("가위, 1인용 승\n");

		}
		else if (rcp2 % 3 == 바위)
		{
			printf("바위, 비김\n");

		}
		else if (rcp2 % 3 == 보)
		{
			printf("보, 1인용 패배\n");

		}
		else
		{
			printf("잘못된 값! 1인용 %d\n", rcp1);
			printf("잘못된 값! 2인용 %d\n", rcp2);
		}

	}
	else if (rcp1 % 3 == 보)
	{
		printf("보\n");
		if (rcp2 % 3 == 가위)
		{
			printf("가위, 1인용 패배\n");

		}
		else if (rcp2 % 3 == 바위)
		{
			printf("바위, 1인용 승\n");

		}
		else if (rcp2 % 3 == 보)
		{
			printf("보, 비김\n");

		}
		else
		{
			printf("잘못된 값! 1인용 %d\n", rcp1);
			printf("잘못된 값! 2인용 %d\n", rcp2);
		}

	}
	else 
	{
		printf("잘못된 값! 1인용 %d\n", rcp1);
		printf("잘못된 값! 2인용 %d\n", rcp2);
	}

	switch (rcp1 % 3)
	{
	case 0:
		printf("가위\n");
		switch (rcp2 % 3)
		{
		case 0:
			printf("가위\n");
			printf("비김\n");
			break;
		case 1:
			printf("바위\n");
			printf("1인용 패배\n");
			break;
		case 2:
			printf("보\n");
			printf("1인용 승리\n");
			break;

		default:
			printf("잘못된 값! %d\n", rcp1);
			printf("잘못된 값!(2) %d\n", rcp2);
			break;
		}
		break;
	case 1:
		printf("바위\n");
		switch (rcp2 % 3)
		{
		case 0:
			printf("가위\n");
			printf("1인용 승리\n");
			break;
		case 1:
			printf("바위\n");
			printf("비김\n");
			break;
		case 2:
			printf("보\n");
			printf("1인용 패배\n");
			break;

		default:
			printf("잘못된 값! %d\n", rcp1);
			printf("잘못된 값!(2) %d\n", rcp2);
			break;
		}
		break;
	case 2:
		printf("보\n");

		switch (rcp2 % 3)
		{
		case 0:
			printf("가위\n");
			printf("1인용 패배\n");
			break;
		case 1:
			printf("바위\n");
			printf("1인용 승리\n");
			break;
		case 2:
			printf("보\n");
			printf("비김\n");
			break;

		default:
			printf("잘못된 값! %d\n", rcp1);
			printf("잘못된 값!(2) %d\n", rcp2);
			break;
		}
		break;

	default:
		printf("잘못된 값!(1) %d\n", rcp1);
		printf("잘못된 값!(2) %d\n", rcp2);

		break;
	}

	return 0;
}