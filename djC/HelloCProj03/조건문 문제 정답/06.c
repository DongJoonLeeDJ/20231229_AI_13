//6. 3���� ������ �Է� ��, �� �߿��� ���� ū ���� ����Ͻÿ�.
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("6. ���� 3�� �Է�\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
		printf("��� ����\n");
	else if (a > b && a > c)
		printf("max(a) : %d\n", a);
	else if (b > a && b > c)
		printf("max(b):%d\n", b);
	else if (c > a && c > b)
		printf("max(c):%d\n", c);
	else // ???? �̷� ��쿣 else if�� ������ �� �´�.
		printf("%d %d %d\n", a, b, c);
	
}