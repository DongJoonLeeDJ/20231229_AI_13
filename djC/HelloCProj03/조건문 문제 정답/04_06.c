//4-6. 내가 태어난 연도와 현재 연도 입력해서 나이를 구하는 프로그램을 작성하시오.
//단, 태어난 연도가 더 큰 경우에 대해서는 잘못됐다고 출력하시오.
#include<stdio.h>
int main()
{
	int birth,now;
	printf("4-6. 태어난 연도와 현재 연도 입력\n");
	scanf("%d %d", &birth, &now);
	if (birth > now)
		printf("잘못된 값 입력!!\n");
	else
		printf("나이 : %d살\n", now - birth);
	return 0;
}