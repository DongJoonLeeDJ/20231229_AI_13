//continue : break���� �ٸ���, �ݺ����� ������ �� �ƴϰ�!
//�ش� ������ �ǳʶٴ� ��
//ex. 1���� 10���� ����ϵ�, ¦���� ����ϰ� �Ѵٸ�
//����� 2������ �ִ�.
//1) if�� �̿��ؼ� ¦���� ����ϰ� �ϴ� ���
//2) if�� �̿��ؼ� Ȧ���� ���� �ܰ�� �ǳʶٰ� �ϴ� ���(continue)
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue; //break�� �ݺ��� ��ü�� �׳� ��������
		printf("%d\n", i);
	}

	for (int i = 0; i < 10; i++) //----1
	{
		printf("----\n");
		for (int j = 0; j < 10; j++) //----2
		{
			printf("%d : %d\n", i, j);
			if (j == 5)
				break; //���� �ݺ����� ���������ٴ� �ǹ�(2�� �ݺ����� ��������)
		}
		printf("@@@@\n");
	}

	printf("break ex\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			break;
		printf("%d\n", i);
	}

	printf("continue ex\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			continue;
		printf("%d\n", i);
	}


	return 0;
}