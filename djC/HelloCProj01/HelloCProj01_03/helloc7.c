//scanf_s는 visual studio용 문법
//표준은 scanf입니다.
//프로젝트부분 마우스 우클릭 -> 속성
//C/C++ -> sdl 검사 "아니요"로 선택
//scanf_s가 아니라 scanf를 쓸 수 있음
#include<stdio.h>
int main()
{
	printf("당신의 나이를 입력하세요.");
	int age;
	scanf("%d", &age);
	printf("당신의 키를 입력하세요.");
	double h;//lf=long float, f = float
	scanf("%lf", &h);
	//.2 소수점 두 번째 자리까지 나타냄(반올림)
	printf("나이:%d, 키:%.2f\n", age, h);
	printf("당신의 태어난 연도와 지금 연도를 입력하세요.");
	int birth, now;
	//scanf("%d %d", &birth, &now);//1989 2024
	scanf("%d,%d", &birth, &now);//1989,2024
	printf("나이:%d\n", now - birth);
	return 0;
}