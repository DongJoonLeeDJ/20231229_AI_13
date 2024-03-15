#include<stdio.h>
int mysum(int n)
{
	if (n <= 0)
		return 0;
	return n + mysum(n - 1);
}
int main()
{
	//1부터 3까지의 합
	int aa = 1 + 2 + 3;
	int sum = 0;
	for (int i = 1; i<= 3; i++)
		sum += i;
	printf("%d %d %d", aa, sum, mysum(3));
	printf("\n");




	int num[5];
	int nums[3][5];
	int nums2[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};


	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 값 입력\n", i);
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++)
		printf("num[%d]=%d\n", i, num[i]);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("nums[%d][%d]에 값 입력\n", i, j);
			scanf("%d", &nums[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("nums[%d][%d]=%d\n", i, j, nums[i][j]);
		}
	}

}