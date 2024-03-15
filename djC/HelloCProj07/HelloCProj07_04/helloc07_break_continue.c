#include<stdio.h>
int main()
{

	//break, continue : for, while, do while 에서 모두 동일하게 사용됨
	//break : 반복문 중단
	//continue : 다음 단계로 넘어가버리는 것

	int a = 0;
	while (1) //무한 반복
	{
		printf("안녕하세요!\n");
		a++;
		if (a > 10)
			break; //반복문 종료
	}
	a = 0;
	while (a <= 10)
	{
		a++;
		if (a % 2 != 0) //홀수인 경우 그 다음 단계로 스킵
			continue;
		printf("a=%d\n", a); //짝수일 땐 출력
	}

	return 0;
}