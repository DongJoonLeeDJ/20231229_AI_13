#include<stdio.h>
int main()
{
	printf("4-8. �� �ٸ� Ǯ��. �� ���� ���� �Է�\n");
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	if (n1 < 100 || n1>999 || n2 < 100 || n2>999)
		printf("�߸��� ��\n");
	else			
		printf("%d %d %d %d\n", n1 * (n2 % 10), n1 * ((n2 / 10) % 10), n1 * (n2 / 100), n1 * n2);

	return 0;
}