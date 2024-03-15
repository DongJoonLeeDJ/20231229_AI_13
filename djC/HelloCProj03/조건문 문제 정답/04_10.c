//4-10. 9번 문제를 조건문을 이용해서 풀어보시오(훨씬 쉽게 풀릴 것으로 예상됨)
#include<stdio.h>
int main()
{
	int num;
	printf("4-10. 4-9의 조건문 버전, 정수 하나 입력\n");
	scanf("%d", &num);
	if (num == 1)
		printf("1 5 4 6 2 3\n");
	else if (num == 2)
		printf("2 3 1 5 4 6\n");
	else if (num == 3)
		printf("3 1 5 4 6 2\n");
	else if (num == 4)
		printf("4 6 2 3 1 5\n");
	else if (num == 5)
		printf("5 4 6 2 3 1\n");
	else if (num == 6)
		printf("6 2 3 1 5 4\n");
	else
		printf("잘못된 입력\n");
	return 0;
}