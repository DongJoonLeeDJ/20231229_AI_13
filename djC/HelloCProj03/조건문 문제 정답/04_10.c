//4-10. 9�� ������ ���ǹ��� �̿��ؼ� Ǯ��ÿ�(�ξ� ���� Ǯ�� ������ �����)
#include<stdio.h>
int main()
{
	int num;
	printf("4-10. 4-9�� ���ǹ� ����, ���� �ϳ� �Է�\n");
	scanf("%d", &num);
	if (num == 1)
		printf("1 5 4 6 2 3\n");
	else if (num == 2)
		printf("2 3 1 5 4 6\n");
	else if (num == 3)
		printf("3 1 5 4 6 2\n");
	else if (num == 4)
		printf("4 6 2 3 1 5\n");
	else if (num == 5)
		printf("5 4 6 2 3 1\n");
	else if (num == 6)
		printf("6 2 3 1 5 4\n");
	else
		printf("�߸��� �Է�\n");
	return 0;
}