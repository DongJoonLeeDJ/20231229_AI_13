//switch : 조건문 들 중 하나
//카멜표기법, 스네이크 표기법
//변수 표기의 중요한 원칙
// #region
//if(0), if(1) 이런 것들 소개하기
#include<stdio.h>
int main()
{
	//switch : case by case
	//경우의 수를 쭉 늘어놓을 때 쓰는 문법
	//주사위를 던졌다. 경우의 수는 1부터 6까지 나온다.
	//그 경우에 수에 따라서 메시지를 다르게 출력하고 싶다면...?
	//if문으로는 모두 할 줄 아니까, switch문으로 표현해보겠습니다.
	int dice;
	printf("주사위 값 입력(1~6사이)\n");
	scanf("%d", &dice);
	//switch 적고 tab 
	switch (dice)
	{ //case by case의 경우의 수들을 다 늘어놓는다.
	case 1:
		printf("주사위 눈 일이 나왔습니다.\n");
	case 2:
	case 3:
		printf("주사위 눈이 이나 삼이 나왔습니다.\n");
	case 4:
	case 5:
		printf("주사위 눈이 사나 오가 나왔습니다.\n");
		break;
	case 6:
		printf("가장 큰 수가 나왔습니다.\n");
		break;
	default: //if의 else랑 동일함
		printf("%d는 잘못된 값입니다.\n", dice);
		break;
	}


	//카멜 = camel = 낙타
	//낙타등처럼 변수를 표기함
	//thisYear 처럼 소문자로 시작하고 중간 중간 대문자

	//스네이크
	//밑줄(=언더바, underbar)로 단어를 구분함
	//this_year // THISYEAR

	//헝가리안 표기법은 거의 안 쓰임

	//변수 표기시
	// 한글은 지양하는 게 좋음
	// 정수로 시작할 수 없다.
	// int 1;  int 1Year;//이런거 안 됨
	// 영어로 시작해야 하거나 특수문자 중에선 _만 허용됨
	int year;
	int _year;
	//int year@year; //특수문자는 _만 허용된다고 보면됨
	int year2;

	return 0;
}