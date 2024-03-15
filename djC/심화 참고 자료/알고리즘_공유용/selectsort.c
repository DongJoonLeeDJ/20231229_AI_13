# include <stdio.h>
# define MAX_SIZE 5

// 선택 정렬
void selection_sort(int list[], const int n)
{
    int i, j, indexMin, temp;

    for (i = 0; i < n - 1; i++)
    {
        indexMin = i;
        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[indexMin])
            {
                indexMin = j;
            }
        }
        temp = list[indexMin];
        list[indexMin] = list[i];
        list[i] = temp;
    }
}

void main() {
    int i;
    int list[MAX_SIZE] = { 9, 6, 7, 3, 5 };

    // 선택 정렬 수행
    selection_sort(list, MAX_SIZE);

    // 정렬 결과 출력
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%d\n", list[i]);
    }
}