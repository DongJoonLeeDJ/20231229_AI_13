#include<stdio.h>
int calculator(int a, int b, char buho)
{
	switch (buho)
	{
	case '+':
		return a + b; //break가 의미없음, return시 함수 자체가 종료됨
	case '-':
		return a - b;
	case 'x':
	case 'X':
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	default:
		printf("%c는 잘못된 부호입니다.\n", buho);
		return 0;
	}
}
int main()
{
	int result = calculator(1, 2, '+');
	printf("result=%d\n", result);
	printf("result=%d\n", calculator(10, 3, '-'));
	printf("result=%d\n", calculator(10, 3, 'x'));
	printf("result=%d\n", calculator(10, 3, 'X'));
	printf("result=%d\n", calculator(10, 3, '*'));
	printf("result=%d\n", calculator(10, 3, '/'));
	printf("result=%d\n", calculator(10, 3, '%'));
	printf("result=%d\n", calculator(10, 3, '?'));
	return 0;
}