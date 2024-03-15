//7. 5개의 정수를 입력 후, 그 중에서 가장 큰 값을 출력하시오.
#include<stdio.h>
int main()
{

	int a, b, c, d ,e;
	printf("7. 정수 5개 입력\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int max = a; //첫번째 수를 가장 큰 수로 가정
	if (max < b) //b가 더 크다면 교체
		max = b;
	if (max < c) //c가 더 크다면 교체
		max = c;
	if (max < d) //d가 더 크다면 교체
		max = d;
	if (max < e) //e가 더 크다면 교체
		max = e;
	printf("가장 큰 수 : %d\n", max);


	//어떤 게 더 큰 수 인지 알 고 싶다면...
	char maxch = 'a';
	max = a; //첫번째 수를 가장 큰 수로 가정
	if (max < b) //b가 더 크다면 교체
	{
		max = b;
		maxch = 'b';
	}
	if (max < c) //c가 더 크다면 교체
	{
		max = c;
		maxch = 'c';
	}
	if (max < d) //d가 더 크다면 교체
	{
		max = d;
		maxch = 'd';
	}
	if (max < e) //e가 더 크다면 교체
	{
		max = e;
		maxch = 'e';
	}
	printf("가장 큰 수(%c) : %d\n", maxch,max);

	return 0;
}