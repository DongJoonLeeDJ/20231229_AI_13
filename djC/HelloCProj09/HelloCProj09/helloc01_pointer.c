#include<stdio.h>
int main()
{
	//포인터 = *(별) = 주소를 저장하는 변수
	//정수타입 변수의 주소는 int*, 실수 타입 변수의 주소는 double*
	//여러 글자의 문자 즉 문자열은 char* 이런 형태나 배열이라는 형태로 저장함
	//참고로 배열=포인터인 데 이건 좀 따 설명할게요.
	int a = 10;
	int* ptra = &a; //별(*)의 위치는 상관없으나 int*로 표기하는 게 이해하기 편함 
	int * ptraa = &a;
	int *ptraaa = &a;
	printf("%d %d\n", a, *ptra); //둘 다 10
	printf("%p %p\n", &a, ptra); //둘 다 a의 주소(=위치값)값이 나옴
	int** pptra = &ptra;
	printf("%p %p %d\n", pptra, *pptra, *(*pptra));

	//포인터를 이용해서 값을 바꾸는 방법
	//즉 변수 a가 아니라 a의 주소를 이용해서 간접적으로 값을 바꾸는 방법
	*ptra = 100; //a의 값이 바뀜!!!!!!!!!!!!
	printf("a=%d\n", a);



	return 0;
}