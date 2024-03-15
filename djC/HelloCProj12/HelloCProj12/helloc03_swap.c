#include<stdio.h>
void swap2(int*, int*);
void swap3(int* a, int* b); 
void swap(int* a, int* b) 
{
	//포인터가 없으면 swap에서만 존재하는 변수
	//이 함수에 있는 a와 b도 이 함수에만 존재하는 변수이기는 하나
	//이 변수가 저장하는 게 main에 있는 변수의 주소이므로
	//값 변경하면 main에 영향을 준다.
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3, b = 5;
	printf("a=%d, b=%d\n", a, b);
	swap(&a, &b); //포인터는 주소를 저장하는 변수이므로 주소를 넘겨준다.
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap3(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}