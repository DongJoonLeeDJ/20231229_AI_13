//4-12. 자신의 영어 이름 첫 글자를 입력하고 출력하되, 소문자는 대문자로, 대문자는 소문자로 바꿔서 출력할 것(hint : ASCII, a=97, A=65라는 사실을 기억할 것)
#include<stdio.h>
int main()
{
	//printf("4-12. 자신의 영어 이름 첫 글자 입력\n");
	//char ch;
	//scanf("%c", &ch);
	printf("4-12. 자신의 영어 이름 첫 글자 입력\n");
	char ch = getchar();
	printf("ch=%c\n", ch);
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + ('a' - 'A');
	else if (ch >= 'a' && ch <= 'z')
		ch = ch - ('a' - 'A');
	//else //이 코드 유무와 용도 : 알파벳 외 입력 시 예외 처리
	//	ch = '!';
	printf("ch=%c\n", ch);

	
	return 0;
}