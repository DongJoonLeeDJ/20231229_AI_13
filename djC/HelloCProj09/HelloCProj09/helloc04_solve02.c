#include<stdio.h>
int main()
{
	//5ĭ¥�� �迭�� �����ϴ� ����� �������� �ִ�.
	int num[5]; //�� �� �ȿ� �� �ִ� ������ �����Ⱚ��(������ ����)
	int numbers[] = { 10,20,30,40,50 };

	int a = 100;
	int b = 200;
	int* p = &a;
	p = &b;

	printf("%d %p", *p, p);
	//*num = 1000; //num[0] = 1000;
	//*(num+1) = 2000; //num[1] = 2000;
	//num = p;
	//num = &a;

	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]��° �� �Է�\n", i);
		scanf("%d", &num[i]);
	}
	printf("�� ���� �Է��ϴ� ���\n");
	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]); //11 21 -30 -4 5
	for (int i = 0; i < 5; i++)
	{
		printf("num[%d] = %d, numbers[%d]=%d\n", i,num[i],i,numbers[i]);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += num[i];
	printf("num�� �� �� : %d\n", sum);

	//���� ù��°�� �ִ����� �ּڰ����� ����
	//���� ù��°�ε���(=0)�� �ִ��� �ε������� �ּڰ��� �ε����� ����
	int idxMax = 0;
	int idxMin = 0;
	int max = num[0]; //max = 0 �ϸ� �� ��!!! 
	int min = num[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			idxMax = i;
		}
		if (min > num[i])
		{
			min = num[i];
			idxMin = i;
		}
	}
	printf("�ִ�=num[%d]:%d, �ּڰ�=num[%d]:%d\n", idxMax,max,idxMin,min);


	return 0;
}