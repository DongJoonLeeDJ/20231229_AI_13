#include<stdio.h>
int main()
{
	//삼항연산자(=비교적 간단한 조건문에서 많이 쓰임, 쓰는 건 쉬운 데 읽기가 힘든 코드)
	int a = 10; //변수 선언시에는 그 변수의 타입과 이름 혹은 타입,이름,값을 적어주기
	int b = 100; //타입, 이름, 값 다 적어서 선언하는 걸 초기화라고 함 (=선언과 동시에 초기화)
	int c; //타입과 이름만 적어주는 건 그냥 선언
	c = 100; //선언 후에 초기화를 한 것
	a > b ? printf("a는 b보다 커요\n") : printf("a는 b보다 크지 않아요.\n");
	b = 15;
	a > b ? printf("a는 b보다 커요\n") : (a==b?printf("a==b") : printf("a<b"));
	
	//if(=가장 많이 쓰이고, 삼항연산자와 switch를 완벽하게 대체 가능함)
	if (a > b) //if 안에 조건을 적음, if끝에는 세미콜론 붙이지 않음
		printf("a는 b보다 큼\n");
	else //if안에 있는 조건이 아닌 경우에 대해서 실행할 코드
		printf("a는 b보다 크지 않음\n");

	//else if를 쓰면 if를 여러 개 쓸 수 있다.
	if (a > b)
		printf("a>b\n");
	else if (a == b) //else if는 경우의 수가 여러 개 라면 여러 개를 쓸 수 있다.
		printf("a==b\n");
	//else if (a == b)
	//	printf("a==b\n");
	//else if (a == b) 
	//	printf("a==b\n");
	else
		printf("a<b\n");

	//if, else if, else, for, while, do while 공통점
	//실행해야 하는 코드가 2줄 이상일 경우에는 꼭 중괄호로 코드를 묶어야 함
	if (a > b)
	{
		printf("a는 b보다 커요\n");
		printf("a는 b보다 큽니다!!!\n");
	}
	else
	{
		if (a == b)
			printf("a는 b랑 같아요.\n");
		else
			printf("a는 b보다 작아요\n");
	}
	
	
	return 0;
}