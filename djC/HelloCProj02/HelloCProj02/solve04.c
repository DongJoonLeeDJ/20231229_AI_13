#include<stdio.h>
#define BYTE 8 //매크로 상수
int main()
{
	int r = 10;
	//상수는 보통 대문자로 쓰는 것이 관례
	//상수는 한 번 선언하고 나면 값을 변경할 수 없음
	const double PI = 3.14;//상수
	//PI = 3.1415; //이런식으로 변경 안 됨
	printf("원의 반지름을 입력하세요.\n");
	scanf("%d", &r);
	printf("원의 넓이 : %f, 원의 둘레:%f\n", 
		r*r*PI, 2*r*PI);
	printf("몇 바이트?");
	int byte;
	scanf("%d", &byte);
	printf("%d\n", byte * BYTE);

	//~~~~ 쓰기용으로 열 수 없습니다.
	//실행하고 입력 기다리고 있는 상태에서
	//코드 실행하고 다시 실행하려고 하면 에러가 난다.
	//따라서 실행했던 걸 끄고 다시 켜야 함.
	const int MIN = 60;//60초 = 1분
	const int MONTH = 12;//1년 = 12개월
	//123초 = 2분 3초
	//몫과 나머지를 활용하면 됨
	printf("몇 초?");
	int sec;
	scanf("%d", &sec);
	printf("%d분 %d초\n", sec / MIN, sec % MIN);
	printf("태어난 연도, 현재 연도 입력\n");
	int birth, year;
	scanf("%d %d", &birth, &year);
	printf("생후 %d개월\n", (year - birth) * MONTH);


	return 0;
}