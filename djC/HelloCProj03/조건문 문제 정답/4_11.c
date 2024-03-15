//4-11. 두 수를 입력 후 두 개의 값을 서로 뺀 값을 출력한다. 단, 음수가 나올 경우 양수로 바꿔서 출력할 것
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("4-11. 두 수 입력\n");
	scanf("%d %d", &num1, &num2);
	int solve = num1 - num2;
	if (solve < 0)
		solve *= -1; //solve = solve * -1;
	printf("두 값의 차이 : %d\n", solve);
	return 0;
}