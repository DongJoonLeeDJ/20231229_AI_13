#include<stdio.h>
int main()
{
	//1. �� ���� ���� �Է� �� ù��° ���� ū ��쿡�� "!" ��� (if)

	int num1, num2;
	printf("1. �� �� �Է�\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!\n");
	//2. �� ���� ���� �Է� �� ù��° ���� ũ�� "!!" �׷��� ������ "??" ��� (if else)

	printf("2. �� �� �Է�\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!!\n");
	else
		printf("??\n");
	//3. �� ���� ���� �Է� �� ù��° ���� ũ�� "!!!" ������ "==", �ι�° ���� ũ�� "???" ��� (if else if else)
	printf("3. �� �� �Է�\n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2)
		printf("!!!\n");
	else if (num1 == num2)
		printf("==\n");
	else
		printf("???\n");
	
	return 0;
}