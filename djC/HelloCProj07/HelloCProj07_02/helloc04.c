#include<stdio.h>
#define WORLDCUP 2002 //매크로 상수
//컴파일러가 실행하기 전에 읽어들이는 상수
//가독성을 위한다는 점은 const 이용한 함수와 똑같지만
//const보다 메모리에 미리 올라가있다.
int main()
{
	/*int a, b;
	a = 3;
	b = 5;*/
	//int a = 3, b = 5;
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	printf("a=%d b=%d\n", a, b);
	printf("%d\n", a);
	printf("%d\n", b);
	int c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);

	a = 9999999999; //99억은 4byte가 담을 수 있는 값이 아님...
	//참고로 c는 int와 long이 둘 다 4byte이다.
	//오버플로우와 언더플로우 개념때문에 이상한 값이 출력됨

	long long aa = 9999999999;//long long은 8byte 정수이고
	//c#, java에서는 그냥 long 이라고 적음
	printf("%d %lld\n", a, aa);

	//상수
	//한 번 선언하고 나면 변하지 않는 값
	//보통 대문자로 쓰고, 가독성을 위해서 많이 사용함
	const double PI = 3.14;//원주율은 보통 3.14를 많이 씀
	const int DJBYEAR = 1989;
	const PI2 = 3.1415;
	const DJYEAR = 1989;
	//PI = 3.1415; //수정 불가능
	int r = 5; //한 원의 반지름 값  r
	printf("반지름이 %d인 원의 넓이 : %f\n", r, r * r * 3.14);
	printf("반지름이 %d인 원의 넓이 : %f\n", r, r * r * PI);
	printf("%d년도 기준 이동준의 나이 : %d\n", 2024, 2024 - DJYEAR);
	printf("4강 신화가 발생한 지 %d년도\n", 2024 - WORLDCUP);

	return 0;
}