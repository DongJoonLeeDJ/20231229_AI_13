#include<stdio.h>
#include<stdlib.h> //동적 할당때 필요
#define MAXSIZE 1024
int main()
{
	int n;
	printf("n의 값은?\n");
	scanf_s("%d", &n);
	//int numbers[n];
	int* numbers = (int*)malloc(sizeof(int) * n); //heap이라는 영역에 메모리를 할당해줌
	//내가 입력한 크기만큼 배열 크기 설정 가능
	//상수를 이용하여 크기 할당하는 건 '스택'이라는 메모리 영역에 메모리를 할당해줌
	int mynums[1024];
	int mynums2[MAXSIZE];
	return 0;
}