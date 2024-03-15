//4-5. 정수를 입력받고 그에 대한 분과 초를 출력하되, 3600 이상일 경우 "허용 sec 값 초과" 출력
#include<stdio.h>
int main()
{
	//참고
	//전부 빌드에서 제외하거나
	//빌드에서 제외를 잘못하면 마지막으로 실행한 코드를 실행하니
	//주의할 것
	int sec;
	printf("4-5. 초 입력\n");
	scanf("%d", &sec);
	if (sec >= 3600 || sec < 0)
		printf("허용 sec 값 초과\n");
	else
	{
		printf("%d분 %d초\n", sec / 60, sec % 60);
	}

	//참고
	if (sec >= 3600 || sec < 0)
		printf("허용 sec 값 초과\n");
	//else if(sec>=0 && sec<60) //같은 코드
	else if (sec >= 0 && sec <= 59)
		printf("%d초\n", sec);
	else
	{
		printf("%d분 %d초\n", sec / 60, sec % 60);
	}
	return 0;
}