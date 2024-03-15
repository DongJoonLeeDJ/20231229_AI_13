#include<stdio.h>
#define 가위 0
#define 바위 1
#define 보 2

int main()
{
	int rcp;
	printf("가위 바위 보!(정수 아무거나)\n");
	scanf("%d", &rcp);
	if (rcp%3 == 가위)
		printf("가위\n");
	else if (rcp % 3 == 바위)
		printf("바위\n");
	else if (rcp % 3 == 보)
		printf("보\n");
	else
		printf("잘못된 값! %d\n", rcp);

	switch (rcp%3)
	{
	case 0:
		printf("가위\n");

		break;
	case 1:
		printf("바위\n");

		break;
	case 2:
		printf("보\n");
		break;

	default:
		printf("잘못된 값! %d\n", rcp);

		break;
	}

	return 0;
}