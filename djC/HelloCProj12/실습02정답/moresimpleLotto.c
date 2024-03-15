#include<stdio.h>
#include <stdlib.h>
#include <windows.h>
void setSrand(int* k)
{
    srand(GetCurrentProcessId() + (*k));
    (*k)++;
}
int getRandom(int r) //1부터 r까지의 랜덤값 추출
{
    return rand() % r + 1;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
int isExist(int arr[], int size, int checkNum)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == checkNum)
            return 1;
    }
    return 0; //존재하지 않음
}
int isWrongLottoNum(int* num)
{
    if (*num == 0)
    {
        return 0;
    }
    else if (*num < 0 || *num>5)
    {
        *num = 0;
        printf("Error!");
        return 0;
    }
    else
    {
        (*num)--;
        return 1;
    }
}
int main()
{
    int lotto[6];
    int bns = -1;
    int k = 0;
    setSrand(&k);
    int count = 3;
    while (isWrongLottoNum(&count))
    {
        for (int i = 0; i < 6; i++)
        {
            lotto[i] = getRandom(45);
            if (isExist(lotto, i, lotto[i]))
            {
                setSrand(&k);
                i--;
                continue;
            }

        }
        bubbleSort(lotto, 6);
        printf("로또 번호\n");
        printArr(lotto, 6);
        do
        {
            bns = getRandom(45);
        } while (isExist(lotto, 6, bns)); //bns에 뭐가 있든 한 번은 수행함
        printf("보너스 번호 : %d\n", bns);
        //break;
    }

    return 0;
}