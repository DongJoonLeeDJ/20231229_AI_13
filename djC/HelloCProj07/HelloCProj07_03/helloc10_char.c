//문자와 정수간의 관계(ASCII, UNICODE 개념 설명)
#include<stdio.h>
int main()
{
	//65 = 'A', 97 = 'a'
	printf("%d %c\n", 'A', 97);
	printf("%d %d\n", 0, '0'); //글자 '0'은 10진수로 48

	//컴퓨터가 계산도 하고 문자도 처리해야 하는 데,
	//10진수는 2진수로 바꿔야 하고
	//문자는 10진수로 바꾸고 그걸 2진수로 바꿔야 함
	//그래서 알파벳, 특수문자, 숫자를 각각 그에 맞는 10진수로 대응을 함
	//그걸 ASCII코드라고 함(미국에서 표준화가 추진된 정보교환용 7비트 부호)
	//ANSI(미국표준협회)에서 제시한 표준 코드 체계

	//참고로 한글같은 경우에는 UNICODE 체계를 따름
	//'가' = 16진수로 AC00 이고, 이를 10진수로 바꾸면 44032가 됨
	//44032는 1byte로 표현이 안 됨 

	return 0;
}