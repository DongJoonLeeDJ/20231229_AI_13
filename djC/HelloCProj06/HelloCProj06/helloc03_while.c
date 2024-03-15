//반복문 : (goto를이용, 비권장), for, while, do while문
//for : 횟수가 정해져있는 반복문에서 많이 쓰임
//while : 횟수가 무한대인 상태에서 특정 조건일 때만 멈출 때 많이 씀
//참고로 for문도 while같이 쓸 수 있고, while도 for처럼 쓸 수 있다.
#include<stdio.h>
int main()
{
	//while(조건문), 조건문이 참이면 코드를 실행하는 구조
	//따라서 조건문 대신 1을 넣으면 무한 반복하는 코드가 됨
	//참고로 for(;;) 이렇게 쓰거나 for(;1;) 이런식으로도 쓸 수 있다.
	while(1)
	{
		printf("정수 입력\n");
		int n; //int n은 while문 빠져나가면 없어짐
		scanf("%d", &n);
		if (n < 0)
			break; //switch문에서도 쓰였던 것인 데
		//while, do while 그리고 for에서도 쓰임
		//반복문에서의 break는 해당 반복문을 빠져나갈 때 사용됨
		printf("입력값 : %d\n", n);
	}
	//1부터 10까지의 합을 구하고 싶다. while문 버전
	int i = 1;
	int sum = 0;
	while (i <= 10) //조건에 따라 반복하는 횟수가 정해짐
	{
		sum += i;
		i++;
	}
	printf("1부터 10까지의 합 : %d\n", sum);
	//do while : 조건에 관계없이 무조건 한 번은 실행함
	//do while : 사용자한테 입력을 한 번은 받아야 하는 경우
	//입력을 받고 그 값에 따라서 계속 반복문 실행할 지 여부를 결정
	//while문은 괄호 안의 조건이 맞지 않으면 한 번도 실행하지 않음
	printf("i=%d\n", i);
	do
	{
		printf("i의 현재 값은 %d입니다.\n", i);
	} while (i<10); //저 괄호안의 조건은 거짓임! 그래도 do를 한 번은 꼭 실행함
	return 0;
}