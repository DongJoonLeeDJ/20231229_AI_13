#include<stdio.h>
int main()
{
	//5칸짜리 배열을 선언하는 방식은 여러가지 있다.
	int num[5]; //이 때 안에 들어가 있는 값들은 쓰레기값들(임의의 값들)
	int numbers[] = { 10,20,30,40,50 };

	int a = 100;
	int b = 200;
	int* p = &a;
	p = &b;

	printf("%d %p", *p, p);
	//*num = 1000; //num[0] = 1000;
	//*(num+1) = 2000; //num[1] = 2000;
	//num = p;
	//num = &a;

	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]번째 값 입력\n", i);
		scanf("%d", &num[i]);
	}
	printf("한 번에 입력하는 방법\n");
	for (int i = 0; i < 5; i++)
		scanf("%d", &numbers[i]); //11 21 -30 -4 5
	for (int i = 0; i < 5; i++)
	{
		printf("num[%d] = %d, numbers[%d]=%d\n", i,num[i],i,numbers[i]);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += num[i];
	printf("num의 총 합 : %d\n", sum);

	//가장 첫번째를 최댓값이자 최솟값으로 가정
	//가장 첫번째인덱스(=0)을 최댓값의 인덱스이자 최솟값의 인덱스로 가정
	int idxMax = 0;
	int idxMin = 0;
	int max = num[0]; //max = 0 하면 안 됨!!! 
	int min = num[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			idxMax = i;
		}
		if (min > num[i])
		{
			min = num[i];
			idxMin = i;
		}
	}
	printf("최댓값=num[%d]:%d, 최솟값=num[%d]:%d\n", idxMax,max,idxMin,min);


	return 0;
}