#include<stdio.h>
int main()
{
	/*
	 a = 5*10; // ���� �� �ּ��� ��� �ּ� �ȿ� ���� ������
				//���� ���� �ʿ䰡 �ִ�.
	*/

	//5. �Է��� ���� ���� �Ʒ��� ���� ����� ������ �� ��
	//(3)
	//	*
	//	**
	//	*** 
	//	(5)
	//	*
	//	**
	//	***
	//	****
	//	*****
	printf("5. �� ���ΰ���?\n");
	int f; //floor�� ����
	scanf("%d", &f);
	for (int i = 0; i < f; i++)
	{
		for (int j = -1; j < i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= f; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	//6. ���ﰢ��
	for (int i = 1; i <= f; i++)
	{
		//������ i�� ������ ���� ����
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*"); //i�� ������ ���� ���� ���� ����
		printf("\n");
	}
	//7. �Ƕ�̵�
	for (int i = 1; i <= f; i++)
	{
		//������ i�� ������ ���� ����
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i*2-1; j++) //i*2-1 Ȥ�� (i*2)-1
			printf("*"); //2n-1 ���� = 1 3 5 7 9 
		printf("\n");
	}

	//8. ���̾Ƹ��
	for (int i = 1; i <= f; i++)
	{
		//������ i�� ������ ���� ����
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; j++) //i*2-1 Ȥ�� (i*2)-1
			printf("*"); //2n-1 ���� = 1 3 5 7 9 
		printf("\n");
	}
	for (int i = 1; i < f; i++) //i<=f -> i<f
	{
		//������ ������ ����
		for (int j = 0; j <  i; j++)
			printf(" ");
		for (int j = (f-i)*2-1; j > 0; j--)
			printf("*"); //���� ������ ����
		printf("\n");
	}

	return 0;
}