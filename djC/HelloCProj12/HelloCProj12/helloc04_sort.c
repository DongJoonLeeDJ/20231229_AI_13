#include<stdio.h>
void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int nums[] = { 10, -1, 5, 99, 7 };
	bubbleSort(nums, sizeof(nums)/sizeof(int));
	for (int i = 0; i < sizeof(nums) / sizeof(int); i++)
		printf("%d\n", nums[i]);
	return 0;
}