#include<stdio.h>
int main()
{
	
	int num[5]; 
	//1. 배열 : 상수 포인터 
	//상수 포인터라는 게 무슨 말이냐면.................
	//한 번 위치를 정하면 다른 위치를 지정할 수가 없다.
	
	//int a = 100;
	//num = &a; //이런 거 안 됨!
	
	//배열 = 포인터
	//한 메모리의 시작 위치를 저장하고 있음.
	int* pnum = num;
	//pnum이랑 num이랑 똑같은 곳을 가리킴(5칸짜리 메모리의 시작 위치)


	for (int i = 0; i < 5; i++)
	{
		printf("num[%d]번째 값 입력\n", i);
		//scanf("%d", &pnum[i]);
		scanf("%d", pnum + i);
		//scanf("%d", num + i);
		//scanf("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		//printf("num[%d]=%d\n", i, num[i]);
		//printf("num[%d]=%d\n", i, *(num+i));
		printf("num[%d]=%d\n", i, *(pnum+i));
		//printf("num[%d]=%d\n", i, pnum[i]);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += *(pnum + i);
		//sum += num[i];
	printf("num의 총 합 : %d\n", sum);

	//가장 첫번째를 최댓값이자 최솟값으로 가정
	//가장 첫번째인덱스(=0)을 최댓값의 인덱스이자 최솟값의 인덱스로 가정
	int idxMax = 0;
	int idxMin = 0;
	int max = *(pnum + 0);//num[0]; //max = 0 하면 안 됨!!! 
	int min = *pnum;//num[0];
	for (int i = 1; i < 5; i++)
	{
		//if (max < num[i])
		if(max < *(pnum+i))
		{
			max = (pnum + i);//num[i];
			idxMax = i;
		}
		//if (min > num[i])
		if (min > *(pnum + i))
		{
			min = (pnum + i);
			idxMin = i;
		}
	}
	printf("최댓값=num[%d]:%d, 최솟값=num[%d]:%d\n", idxMax, max, idxMin, min);


	return 0;
}