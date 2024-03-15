#include<stdio.h>

//열거형
enum RCP
{
	 가위,바위,보
};

int main()
{
	int rcp;
	printf("가위 바위 보!(0,1,2 중 하나)\n");
	scanf("%d", &rcp);
	if (rcp == 0)
		printf("가위\n");
	else if (rcp == 1)
		printf("바위\n");
	else if (rcp == 2)
		printf("보\n");
	else
		printf("잘못된 값!\n");

	switch (rcp)
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
		printf("잘못된 값!\n");
		break;
	}

	//참고(열거형 enum 이용하는 법)
	switch (rcp)
	{
	case 가위:
		printf("가위\n");
		break;
	case 바위:
		printf("바위\n");
		break;
	case 보:
		printf("보\n");
		break;

	default:
		printf("잘못된 값!\n");
		break;
	}


	return 0;
}