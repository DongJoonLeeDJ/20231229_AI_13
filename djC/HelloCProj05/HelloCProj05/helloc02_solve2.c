#include<stdio.h>
int main()
{
	//식을 세우는 방식
	printf("%d\n", (100 + 1) * 100 / 2);
	printf("1부터 n까지의 합을 구하기 위한 n은?\n");
	int n;
	scanf("%d", &n);
	printf("1~%d까지의 합 : %d\n",n, (n+1)*n/2);

	//goto문을 이용하는 방식(=반복문이랑 유사함)
	int sum = 0;
	int a = 1;
SUM_AREA:
	sum = sum + a; //sum+=a; sum에 a를 더해서 그 걸 sum에 대입한 것
	a = a + 1; //a+=1 이라고도 하고, 1에 한해서는 a++, ++a, a--, --a등을 쓸 수 있다.
	if (a <= 100)
		goto SUM_AREA;
	printf("sum=%d\n", sum);


	return 0;
}