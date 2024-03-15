#include<stdio.h>
int main()
{
	printf("달팽이가 한 번에 올라가는 높이(A), 미끄러지는 높이(B), 총 높이(V)??\n");
	int a, b, v;
	int d; //며칠
	scanf("%d %d %d", &a, &b, &v);
	d = (v - b) / (a - b);
	if((v-b) % (a-b) != 0 ) //딱 떨어지지 않으면
		d = (v - b) / (a - b) + 1;
	printf("달팽이가 오르는 데 걸리는 날짜 : %d\n", d);
	return 0;
}