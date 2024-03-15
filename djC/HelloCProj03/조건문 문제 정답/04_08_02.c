#include<stdio.h>
int main()
{
	printf("4-8. 또 다른 풀이. 두 개의 정수 입력\n");
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 < 100 || n1>999 || n2 < 100 || n2>999)
		printf("잘못된 값\n");
	else			
		printf("%d %d %d %d\n", n1 * (n2 % 10), n1 * ((n2 / 10) % 10), n1 * (n2 / 100), n1 * n2);

	return 0;
}