//6. 3개의 정수를 입력 후, 그 중에서 가장 큰 값을 출력하시오.
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("6. 정수 3개 입력\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("모두 같음\n");
	else if (a > b && a > c)
		printf("max(a) : %d\n", a);
	else if (b > a && b > c)
		printf("max(b):%d\n", b);
	else if (c > a && c > b)
		printf("max(c):%d\n", c);
	else // ???? 이럴 경우엔 else if로 끝내는 게 맞다.
		printf("%d %d %d\n", a, b, c);
	
}