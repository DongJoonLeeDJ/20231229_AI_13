#include<stdio.h>
int main()
{
	//1. 1부터 n까지의 수를 모두 출력할 것
	printf("1 이상의 정수를 입력하세요.\n");
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) //i는 for 영역이 끝나면 소멸되는 변수
		printf("%d ", i);
	printf("\n2. 1부터 n까지의 수 중 짝수만 출력할 것\n");
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			printf("%d ", i);
	}
	//3. 1부터 n까지의 수 중 m의 배수를 제외하고 출력할 것
	printf("\n3. m을 입력하세요.\n");
	int m;
	scanf("%d", &m);
	for (int i = 1; i <= n; i++)
	{
		if (i % m != 0)
			printf("%d ", i);
	}
	//4. 1부터 n까지의 합을 구하되, 홀수값만 더하여 출력할 것
	int sum = 0; //합을 저장할 변수
	for (int i = 1; i <= n; i++)
	{
		//if가 없다면 1부터 n까지의 합을 구하는 코드가 됨
		if (i % 2 != 0) //홀수일 때만 i를 sum에 더함
			sum += i;
	}
	printf("\n4. 1부터 %d까지의 홀수 합 : %d\n", n, sum);
	return 0;
}