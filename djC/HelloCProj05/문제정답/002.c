#include<stdio.h>
int main()
{
	int dice;
	printf("주사위 값 입력(1~6사이)\n");
	scanf("%d", &dice);
	if(dice==1)
		printf("주사위 눈 일이 나왔습니다.\n");
	else if(dice==2 || dice==3)
		printf("주사위 눈이 이나 삼이 나왔습니다.\n");
	else if (dice == 4 || dice == 5)
		printf("주사위 눈이 사나 오가 나왔습니다.\n");
	else if(dice==6)
		printf("가장 큰 수가 나왔습니다.\n");
	else
		printf("%d는 잘못된 값입니다.\n", dice);

	return 0;
}