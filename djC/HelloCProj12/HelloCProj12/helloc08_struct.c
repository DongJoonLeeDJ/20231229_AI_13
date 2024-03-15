#include<stdio.h>
#include"myheader3.h"
//구조체 : 사용자 정의 자료형
//int나 double, char등은 딱 하나의 값만 저장 가능
//int배열, double배열, char배열등은 딱 한 종류의 값만 저장 가능
//구조체를 이용하면 변수 하나가 여러 종류의 데이터를 저장 가능
//학생 데이터처럼 이름,학번,국,영,수 점수가 필요한
//복합적인 데이터를 만들 수 있다.
struct Student
{
	char name[100];
	char num[100];
	int math;
	int eng;
	int kor;
};
int main()
{
	struct Student dj = {.name="이동준",.num="09",.math=50,.kor=70,.eng=30};
	//입력하는 건 다른 변수들이랑 똑같이 하면 됨 정수나 실수는 scanf
	//문자열은 gets쓰면 됨
	printf("이름이 뭔가요?\n");
	gets(dj.name);
	printf("이 학생의 이름 : %s\n", dj.name);
	printf("이 학생의 번호 : %s\n", dj.num);
	printf("이 학생의 국영수 : %d %d %d\n", dj.math, dj.kor, dj.eng);
	dj.math = 100;
	//값을 대입할 때 다른 건 일반적인 대입문 쓰는 데 문자열은 strcpy라는 걸 써야 함
	strcpy(dj.name, "조민석"); //dj.name="조민석"; 이렇게 하면 안 됨
	printf("이 학생의 이름 : %s\n", dj.name);
	printf("이 학생의 국영수 : %d %d %d\n", dj.math, dj.kor, dj.eng);

	//앞에 struct를 적을 필요없음
	KBStudent hb = {.age=35,.gen='M',.name="한형빈",.snum="08"};



	return 0;
}