#include<stdio.h>
int main()
{
	//���� ����� ���
	printf("%d\n", (100 + 1) * 100 / 2);
	printf("1���� n������ ���� ���ϱ� ���� n��?\n");
	int n;
	scanf("%d", &n);
	printf("1~%d������ �� : %d\n",n, (n+1)*n/2);

	//goto���� �̿��ϴ� ���(=�ݺ����̶� ������)
	int sum = 0;
	int a = 1;
SUM_AREA:
	sum = sum + a; //sum+=a; sum�� a�� ���ؼ� �� �� sum�� ������ ��
	a = a + 1; //a+=1 �̶�� �ϰ�, 1�� ���ؼ��� a++, ++a, a--, --a���� �� �� �ִ�.
	if (a <= 100)
		goto SUM_AREA;
	printf("sum=%d\n", sum);


	return 0;
}