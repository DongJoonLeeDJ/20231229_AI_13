//4-11. �� ���� �Է� �� �� ���� ���� ���� �� ���� ����Ѵ�. ��, ������ ���� ��� ����� �ٲ㼭 ����� ��
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("4-11. �� �� �Է�\n");
	scanf("%d %d", &num1, &num2);
	int solve = num1 - num2;
	if (solve < 0)
		solve *= -1; //solve = solve * -1;
	printf("�� ���� ���� : %d\n", solve);
	return 0;
}