#include<stdio.h>
int main()
{
	//4-1. 태어난 연도를 입력한다. 연도가 짝수일 경우 건강검진의 해, 그렇지 않을 경우 건강검진의 해 아님 출력
	int y;
	printf("4-1, 4-2. 태어난 연도 입력\n");
	scanf("%d", &y);
	if (y % 2 == 0)
		printf("건강검진의 해\n");
	else
		printf("건강검진의 해 아님\n");
	
	//4-2. 1번과 동일하되 태어난 연도를 0이라고 한 경우에 대한 예외도 추가한다.
	if (y % 2 == 0)
	{
		if(y==0)
			printf("태어난 연도 : 0\n");
		else
			printf("건강검진의 해\n");
	}
	else
		printf("건강검진의 해 아님\n");


	return 0;
}