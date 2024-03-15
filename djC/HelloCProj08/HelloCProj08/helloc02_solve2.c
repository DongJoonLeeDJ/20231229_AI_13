#include<stdio.h>
int main()
{
	printf("a와 b입력\n");
	int a, b;
	int sum = 1;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++)
		sum *= a;
	printf("%d^%d=%d\n", a, b, sum);

	printf("a,b,c 입력\n");
	int c;
	sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	//만약 a가 b보다 더 큰 경우는 어떻게 해야 할까요?
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;
		sum += i;
	}
	printf("%d부터 %d까지의 합(%d 배수 제외) : %d\n",a,b,c,sum);

	return 0;
}