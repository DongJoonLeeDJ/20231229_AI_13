#include<stdio.h>

int main()
{
	int lotto[6];
	int bns;
	int wrong = 0;

	printf("7���� ���� �Է��Ͻÿ�(���ʽ� ��ȣ ����)\n");

	for (int i = 0; i < 6; i++)
		scanf("%d", &lotto[i]);
	scanf("%d", &bns);

	if (bns < 1 || bns>45)
		printf("���ʽ� ��ȣ�� �߸��� ��ȣ�� ���Ե�!\n");
	else
	{
		for (int i = 0; i < 6; i++)
		{
			if (lotto[i] < 1 || lotto[i] > 45)
			{
				wrong = 1;
				printf("�߸��� ��ȣ�� ���Ե�!!\n");
				break;
			}
			else if (bns == lotto[i])
			{
				wrong = 1;
				printf("���ʽ� ��ȣ�� �ߺ�!!\n");
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (lotto[j] == lotto[i])
					{
						wrong = 1;
						printf("�ߺ�!!\n");
						break;
					}
				}
			}
		}
		if (wrong == 0)
		{
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 6 - 1 - i; j++)
				{
					if (lotto[j] > lotto[j + 1])
					{
						int temp = lotto[j];
						lotto[j] = lotto[j + 1];
						lotto[j + 1] = temp;
					}
				}
			}
			printf("�Է��� �ζ� ��ȣ\n");
			for (int i = 0; i < 6; i++)
				printf("%d ", lotto[i]);
			printf("���ʽ� ��ȣ : %d\n", bns);

		}
	}


	return 0;
}