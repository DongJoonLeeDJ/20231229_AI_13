#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int lotto[6];
    int bns;
    int wrong = 0;

    int k = 0;
    srand(GetCurrentProcessId() + k);
    bns = rand() % 45 + 1;
    k++;
    while (1)
    {
        for (int i = 0; i < 6; i++)
        {
            lotto[i] = rand() % 45 + 1;
            for (int j = 0; j < i; j++)
            {
                if (lotto[i] == lotto[j])
                {
                    printf("�ߺ�! lotto[%d]=%d, lotto[%d]=%d\n", i, lotto[i], j, lotto[j]);
                    i--;
                    srand(GetCurrentProcessId() + k); //�õ尪 �����Ͽ� ���� �ٽ� ����
                    k++;
                    break;
                }
            }
            for (int i = 0; i < 6; i++)
            {
                if (bns == lotto[i])
                {
                    printf("���ʽ� �ߺ�~! bns=%d, lotto[%d]=%d\n", bns, i, lotto[i]);
                    bns = rand() % 45 + 1; //���� �� ����
                    i = -1; //ó������ �ٽ� ��
                    srand(GetCurrentProcessId() + k);
                    k++;
                }
            }

        }

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

        printf("�ζ� ��ȣ\n");
        for (int i = 0; i < 6; i++)
            printf("%d ", lotto[i]);
        printf("���ʽ� ��ȣ : %d\n", bns);
        break;
    }
    
	return 0;
}