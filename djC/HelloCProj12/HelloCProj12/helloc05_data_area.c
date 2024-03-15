//변수는 전역변수(혹은 글로벌 변수)랑 지역 변수(혹은 로컬변수)
//우리가 여태 사용한 변수들은 전부 지역변수
//main 함수 안 혹은 내가 만든 함수 안에서만 쓰임
//전역 변수는 main을 포함한 모든 함수에서 다 쓰이는 변수
//글로벌 변수는 바깥에 선언함
#include<stdio.h>
int a = 3; //모든 함수 바깥에 있으므로 main을 비롯한 여러 함수에서
int b = 5; //'공유'하는 변수
void swap()
{
	//int a = 1000; //실수가 결과에 영향을 줄 수 있다.
	int temp = a; //temp는 swap 수행 후 사라짐
	a = b;
	b = temp;
}
int main()
{
	//int a = 100; //전역 변수 a의 값이 덮어쓰기 되버림
	printf("%d %d\n", a, b);
	swap();
	printf("%d %d\n", a, b);
	return 0;
}