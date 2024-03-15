#include<stdio.h>
int main()
{
	int age = 35;
	double height = 173.5;
	char emo = '+';//'-' ,'0'
	printf("나는 %d살입니다. 키는 %fcm입니다. 오늘의 기분은 %c입니다.", age, height, emo);
	//alt + 위 아래 : 코드 이동
	//ctrl + d 코드 복사 & 붙여넣기(한 줄)
	age = 2025 - 1989;
	height = 173.5 - 1.5;
	emo = '-';
	printf("\n나는 %d살입니다. 키는 %fcm입니다. 오늘의 기분은 %c입니다.", age, height, emo);
	emo = emo - 2;
	printf("\n기분 : %c\n", emo);
	printf("기분 값들 : %c %c %c\n", 43, 48, 45);
	printf("부모님 나이 : %d\n", 'A');
	//%d = decimal 의 약자, 정수
	//%f = float의 약자, 실수
	//%c = char의 약자, 문자(1글자 짜리, 따옴표로 감싸짐)

	//char 타입은 정수랑 1:1로 대응됨
	//ASCII 라는 규격에 의해서 그렇다
	//American Standard Code for information interchange



	return 0;
}