#include<stdio.h>
int main()
{
	printf("a�� b�Է�\n");
	int a, b;
	int sum = 1;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < b; i++)
		sum *= a;
	printf("%d^%d=%d\n", a, b, sum);

	printf("a,b,c �Է�\n");
	int c;
	sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	//���� a�� b���� �� ū ���� ��� �ؾ� �ұ��?
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;
		sum += i;
	}
	printf("%d���� %d������ ��(%d ��� ����) : %d\n",a,b,c,sum);

	return 0;
}