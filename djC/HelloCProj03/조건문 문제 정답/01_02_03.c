#include<stdio.h>
int main()
{
	//1. 두 개의 수를 입력 후 첫번째 수가 큰 경우에만 "!" 출력 (if)

	int num1, num2;
	printf("1. 두 수 입력\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!\n");
	//2. 두 개의 수를 입력 후 첫번째 수가 크면 "!!" 그렇지 않으면 "??" 출력 (if else)

	printf("2. 두 수 입력\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!!\n");
	else
		printf("??\n");
	//3. 두 개의 수를 입력 후 첫번째 수가 크면 "!!!" 같으면 "==", 두번째 수가 크면 "???" 출력 (if else if else)
	printf("3. 두 수 입력\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!!!\n");
	else if (num1 == num2)
		printf("==\n");
	else
		printf("???\n");
	
	return 0;
}