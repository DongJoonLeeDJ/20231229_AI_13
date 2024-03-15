#include<stdio.h>

int main()
{
	int lotto[6];
	int bns;
	int wrong = 0;

	printf("7개의 수를 입력하시오(보너스 번호 포함)\n");

	for (int i = 0; i < 6; i++)
		scanf("%d", &lotto[i]);
	scanf("%d", &bns);

	if (bns < 1 || bns>45)
		printf("보너스 번호에 잘못된 번호가 포함됨!\n");
	else
	{
		for (int i = 0; i < 6; i++)
		{
			if (lotto[i] < 1 || lotto[i] > 45)
			{
				wrong = 1;
				printf("잘못된 번호가 포함됨!!\n");
				break;
			}
			else if (bns == lotto[i])
			{
				wrong = 1;
				printf("보너스 번호가 중복!!\n");
			}
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (lotto[j] == lotto[i])
					{
						wrong = 1;
						printf("중복!!\n");
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
			printf("입력한 로또 번호\n");
			for (int i = 0; i < 6; i++)
				printf("%d ", lotto[i]);
			printf("보너스 번호 : %d\n", bns);

		}
	}


	return 0;
}