#include<stdio.h>//printf, scanf등을 위해 필요한 코드
int main()
{
	printf("안녕하세요.\n");
	printf("\"안녕하세요\"\n");
	printf("%d\n", 1 + 9);
	printf("1+9의 결과물은 %d입니다.\n", 1 + 9);
	printf("제 혈액형은 RH'%c'형입니다.\n", '+');
	printf("저의 이메일은 %s@%s입니다.\n", "abcd", "defg.com");
	printf("저의 시력은 %.1f, %.1f입니다.\n", 0.3, 0.5);
	return 0;
}