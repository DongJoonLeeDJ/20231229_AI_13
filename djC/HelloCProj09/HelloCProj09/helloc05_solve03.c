#include<stdio.h>
int main()
{
	
	int num[5]; 
	//1. �迭 : ��� ������ 
	//��� �����Ͷ�� �� ���� ���̳ĸ�.................
	//�� �� ��ġ�� ���ϸ� �ٸ� ��ġ�� ������ ���� ����.
	
	//int a = 100;
	//num = &a; //�̷� �� �� ��!
	
	//�迭 = ������
	//�� �޸��� ���� ��ġ�� �����ϰ� ����.
	int* pnum = num;
	//pnum�̶� num�̶� �Ȱ��� ���� ����Ŵ(5ĭ¥�� �޸��� ���� ��ġ)


	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]��° �� �Է�\n", i);
		//scanf("%d", &pnum[i]);
		scanf("%d", pnum + i);
		//scanf("%d", num + i);
		//scanf("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		//printf("num[%d]=%d\n", i, num[i]);
		//printf("num[%d]=%d\n", i, *(num+i));
		printf("num[%d]=%d\n", i, *(pnum+i));
		//printf("num[%d]=%d\n", i, pnum[i]);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += *(pnum + i);
		//sum += num[i];
	printf("num�� �� �� : %d\n", sum);

	//���� ù��°�� �ִ����� �ּڰ����� ����
	//���� ù��°�ε���(=0)�� �ִ��� �ε������� �ּڰ��� �ε����� ����
	int idxMax = 0;
	int idxMin = 0;
	int max = *(pnum + 0);//num[0]; //max = 0 �ϸ� �� ��!!! 
	int min = *pnum;//num[0];
	for (int i = 1; i < 5; i++)
	{
		//if (max < num[i])
		if(max < *(pnum+i))
		{
			max = (pnum + i);//num[i];
			idxMax = i;
		}
		//if (min > num[i])
		if (min > *(pnum + i))
		{
			min = (pnum + i);
			idxMin = i;
		}
	}
	printf("�ִ�=num[%d]:%d, �ּڰ�=num[%d]:%d\n", idxMax, max, idxMin, min);


	return 0;
}