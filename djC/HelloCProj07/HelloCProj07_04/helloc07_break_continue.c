#include<stdio.h>
int main()
{

	//break, continue : for, while, do while ���� ��� �����ϰ� ����
	//break : �ݺ��� �ߴ�
	//continue : ���� �ܰ�� �Ѿ������ ��

	int a = 0;
	while (1) //���� �ݺ�
	{
		printf("�ȳ��ϼ���!\n");
		a++;
		if (a > 10)
			break; //�ݺ��� ����
	}
	a = 0;
	while (a <= 10)
	{
		a++;
		if (a % 2 != 0) //Ȧ���� ��� �� ���� �ܰ�� ��ŵ
			continue;
		printf("a=%d\n", a); //¦���� �� ���
	}

	return 0;
}