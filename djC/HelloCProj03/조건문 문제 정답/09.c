/*
9. 초를 입력 후 그에 대한 분과 초를 출력하시오.
단, 0 미만의 값이나 3600 이상의 값 입력 시 다시 입력하게 하시오.
hint) goto문(비권장 문법이지만 실무에서 쓰이는 경우가 있으므로 다룬다, 수업 시간에 다루진 않았음)
*/
#include<stdio.h>
int main()
{
	int sec;
	AGAIN:
	printf("초를 입력하세요\n");
	scanf("%d", &sec);
	if (sec < 0 || sec >= 3600)
		goto AGAIN;
	else
		printf("%d분 %d초\n", sec / 60, sec % 60);
	return 0;
}