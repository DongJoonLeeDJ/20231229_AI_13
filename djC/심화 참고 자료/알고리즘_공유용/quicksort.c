#include <stdio.h>
void swap(int arr[], int a, int b) {
    int temp = arr[b];
    arr[b] = arr[a];
    arr[a] = temp;
}

int partition(int arr[], int left, int right) {

    int pivot = arr[left];
    int i = left, j = right;

    while (i < j) {
        while (pivot < arr[j]) {
            j--;
        }

        while (i < j && pivot >= arr[i]) {
            i++;
        }
        swap(arr, i, j);
    }
    arr[left] = arr[j];
    arr[j] = pivot;
    return j;
}

void quickSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int pi = partition(arr, left, right);

    quickSort(arr, left, pi - 1);
    quickSort(arr, pi + 1, right);
}



void main() {
    int i;
    int list[6] = { 30, 70, 40, 20, 10, 50 };
    int left = 0; //배열 시작 index
    int list_size = (sizeof(list) / sizeof(int));
    int right = list_size - 1; //배열 맨 끝 index
    
    // 퀵 정렬 수행
    quickSort(list, left, right);

    // 정렬 결과 출력
    for (i = 0; i < list_size; i++) {
        printf("%d\n", list[i]);
    }
}