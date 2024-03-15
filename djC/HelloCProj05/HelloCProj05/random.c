#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	//int random = rand() % 45 + 1;
	//printf("%d", random);
	int l1, l2, l3, l4, l5, l6, bns;
LOTTO_AREA:
	printf("-----\n");
	srand(GetCurrentProcessId());
	l1 = rand() % 45 + 1;
	l2 = rand() % 45 + 1;
	l3 = rand() % 45 + 1;
	l4 = rand() % 45 + 1;
	l5 = rand() % 45 + 1;
	l6 = rand() % 45 + 1;
	bns = rand() % 45 + 1;
	if (l1 == l2 || l1 == l3 || l1 == l4 || l1 == l5 || l1 == l6 || l1 == bns
		|| l2 == l3 || l2 == l4 || l2 == l5 || l2 == l6 || l2 == bns
		|| l3 == l4 || l3 == l5 || l3 == l6 || l3 == bns
		|| l4 == l5 || l4 == l6 || l4 == bns
		|| l5 == l6 || l5 == bns
		|| l6 == bns)
		goto LOTTO_AREA;
	printf("%d %d %d %d %d %d º¸³Ê½º : %d\n", l1, l2, l3, l4, l5, l6, bns);
	printf("-----\n");
	return 0;
}