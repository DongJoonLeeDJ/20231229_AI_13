#include<stdio.h>
//�� ���� ��쿡�� ���� �ſ� ũ�Ƿ� ��ȯ���� long long��
//���� ���� �ִ�.(������ ��)
int gobsum(int a, int b)
{
	int sum = 1;
	for (int i = a; i <= b; i++)
		sum *= i;
	return sum;
}
int oneToTenSum()
{
	//���� ���� �� �ȿ� scanf�� ���� �ʴ� �̻�
	//������ ����� �Ȱ���
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	return sum;
}
void printGobSum(int a, int b)
{
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	printf("%d���� %d������ �� : %d\n", a, b, sum);
}
void printGobSum2(int a, int b) //�Լ� �ȿ��� �� �ٸ� �Լ� ȣ�� ����
{
	int sum = gobsum(a, b);
	printf("%d���� %d������ �� : %d\n", a, b, sum);
}
void printGobOneToTen()
{
	printf("1���� 10������ �� : %d\n", oneToTenSum());
}
int main()
{
	int result = gobsum(1, 10);
	printf("1���� 10������ �� : %d\n", result);
	printf("1���� 10������ �� : %d\n", oneToTenSum());
	printGobSum(1,10);
	printGobSum2(1, 10);
	printGobOneToTen();
	return 0;
}