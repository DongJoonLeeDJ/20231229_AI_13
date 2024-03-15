#include<stdio.h>
int main()
{
	//사람 두 명의 나이를 입력받는다.
	int a, b;
	printf("두 사람의 나이 입력하세요.\n");
	scanf("%d %d", &a, &b);
	//첫 번째 사람이 나이가 많은지 혹은 그렇지 않은지에 따라 출력 결과 다름
	//삼항 연산자
	a > b ? printf("형님!\n") : printf("형님 아님\n");
	//if문
	if (a > b)
		printf("형!\n");
	else
		printf("형은 아닌가?\n");

	//삼항연산자
	a > b ? printf("형님!!!\n") : (a == b ? printf("친구!\n") : printf("동생!!\n"));

	//if 방식1
	if (a > b)
		printf("형!!\n");
	else if (a == b)
		printf("친구!!!\n");
	else
		printf("동생!!!\n");
	//if 방식2
	if (a > b)
		printf("형~~~!\n");
	else
	{
		if (a == b)
			printf("친구!!~!!\n");
		else
			printf("동생~!~!\n");
	}
	printf("오늘의 기분은 몇점인가요?\n");
	int feel;
	scanf("%d", &feel);
	char f;
	if (feel >= -100 && feel <= 100)
	{
		if (feel < 0)
			f = '-';
		else if (feel == 0)
			f = '0';
		else
			f = '+';
	}
	else
	{
		f = '?';
		printf("잘못된 값\n");
	}
	printf("기분 : %c\n", f);

	f = (feel >= -100 && feel <= 100) ? (feel<0 ? '-' : (feel==0?'0':'+')) : '?';
	f == '?' ? printf("잘못된 값\n") : printf("");
	printf("기분 : %c\n", f);


	return 0;
}