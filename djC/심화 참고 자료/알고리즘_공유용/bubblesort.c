#include <stdio.h>
#define SIZE 5 //������ �Ǳ� ���� �̸� �Է�(=��ó����)
void bubble_sort(int arr[], int size) {
    int i, j, temp;
    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}
void main() {
    
    int arr[SIZE] = { 5,4,2,1,3 };
    
    bubble_sort(arr, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
}

