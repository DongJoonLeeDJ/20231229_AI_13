//포인터 = 배열
//배열을 매개변수로 하는 방법
//int* 혹은 int[] 이런식으로 쓰면 됨
//배열을 매개변수로 한 함수에서 해당 배열에
//변화를 주면 main의 배열에도 영향 받는 걸 확인해보자
//배열을 매개변수로 쓸 땐 매개변수에 배열의 길이도 같이 넘겨줘야 함
//왜냐면 함수 안에서는 sizeof 써봤자 pointer의 크기인 8byte가 나옴

#include<stdio.h>
//void increase(int* a)
//void increase(int a[5])
void increase(int arr[], int size) //왜 size를 매개변수로 넘겨야 하는 지 확인해보자
{
	printf("sizeof의 값 : %d\n", sizeof(arr));
	printf("sizeof의 값 : %d\n", sizeof(arr)/sizeof(int));
	for (int i = 0; i < size; i++)
		arr[i]++;
}
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("[%d]번째 값 : %d\n", i, arr[i]);
}
int main()
{
	int nums[] = { 10,20,30,40,50 };
	//참고로 배열의 사이즈를 구하는 기능이 있음
	//sizeof(int) : 4
	//sizeof(nums) : 20(4byte짜리 데이터가 5개 있으니까)
	printf("%d\n", sizeof(nums));
	printf("%d\n", sizeof(nums) / sizeof(int));

	increase(nums, 5);
	printArr(nums, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", nums[i]);
	}

	return 0;
}