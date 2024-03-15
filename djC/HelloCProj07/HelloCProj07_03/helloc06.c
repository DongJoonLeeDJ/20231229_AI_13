//실수의 출력과 입력

#include<stdio.h>
int main()
{
	double pi = 3.14;//8byte 짜리 실수
	double pi1 = 3.1415, pi2 = 3.141;
	//int a = 5, double b = 3.1; //이런 거 안 됨
	float f = 173.3; //4byte 짜리 실수
	//통상적으로 정수는 int(인트), 실수는 double(더블)을 주로 쓴다.
	//문자는 char(차 혹은 캐릭터라고도 읽음) 만 씀
	//int = integer(인테져) = 정수

	printf("당신의 키는?\n");
	double h;//double은 8byte, float은 4byte라서
	//표현할 수 있는 범위의 크기 차이는 매우 큼
	scanf("%lf", &h); //float 타입 변수의 값을 입력한다면 %f
	//double 타입 변수의 값을 입력한다면 %lf
	//출력할 땐 %lf 혹은 %f 둘 다 가능
	printf("당신의 키는 %f입니다.\n", h);
	printf("당신의 키는 %lf입니다.\n", h);
	printf("키 : %.1f\n", h); //소수 점 첫째 자리까지 나타냄
	printf("키 : %.1lf\n", h);

	//정수랑 실수 모두 공통사항인 것
	//scanf 할 때 띄어쓰기 혹은 콤마를 이용해서 여러 개 입력 가능
	//scanf("%d %d", &b, &c); = 입력할 때 3 5 이렇게 입력함
	printf("pi1,pi2 형식으로 입력하세요\n");
	scanf("%lf,%lf", &pi1, &pi2); //3.14,3.1415 이렇게 해야 함
	//그냥 3.14 3.1415 이렇게하면 입력이 이상하게 됨
	printf("%lf %lf\n", pi1, pi2);



	return 0;
}