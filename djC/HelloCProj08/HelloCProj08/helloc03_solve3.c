#include<stdio.h>
int main()
{
	int inputSugar;
	printf("���� ��kg?\n");
	scanf("%d", &inputSugar);
	int pack = 0; //�ָӴ� ��
	while (1)
	{
		if (inputSugar % 5 == 0)
		{
			pack += inputSugar / 5;
			printf("%d����\n", pack);
			break;
		}
		inputSugar -= 3; //3kg��ŭ ����(�ָӴ� 1�� �߰�)
		pack++;
		if (inputSugar < 0) //5�� 3���� �� �������� �ʴ� ���
		{
			printf("-1\n");
			break;
		}
	}
	return 0;
}