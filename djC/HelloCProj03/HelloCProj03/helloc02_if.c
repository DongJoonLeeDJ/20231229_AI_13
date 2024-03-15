//if : 만약에
//If I were you, I'll take a shower.
#include<stdio.h>
int main()
{
	int num = 10;
	//int num = 9;
	
	//num = -1;
	//if (num > 0) printf("num은 0보다 크다\n"); //가독성 떨어짐
	if (num > 0) //괄호 안에 조건이 맞으면
		printf("num은 0보다 크다\n");//코드 실행
	if (num % 2 == 0 && num > 0)
	{ //실행해야 하는 코드가 2줄 이상이면 꼭 중괄호 써야 됨!
		printf("num은 양수다\n");
		printf("num은 짝수다!\n");
	}

	//else : 기타
	//if 조건에 해당하지 않을 경우에 실행하는 코드
	num = 5;
	num = 10;
	if (num % 2 != 0)
		printf("홀수\n");
	else
		printf("홀수 아님\n");

	printf("num값 입력\n");
	scanf("%d", &num);
	if (num > 0)
		printf("num은 양수\n");
	else if (num == 0) //else if는 여러 개 쓸 수 있다.
		printf("num은 0\n");
	else
		printf("num은 음수\n");

	//1. 중첩 : 조건문 안에 조건문, 반복문 안에 반복문
	//반복문 안에 조건문, 조건문 안에 반복문 등이 가능함
	if (num > 0 /*|| num<0*/)
	{
		if (num % 2 == 0)
			printf("짝수!!!\n");
		else
			printf("홀수!!!\n");
	}
	else  //0이거나 음수인 경우에는 모두 0!!!!를 출력
	{
		printf("0!!!!\n");
	}


	//2. 변수의 영역
	//변수는 중복 선언이 안 된다.
	//기준 : 중괄호 영역을 기준으로 함
	//num = 0;
	if (num == 0)
	{
		int num = 9999; //바깥의 num과 별개의 num
		int a = 100; //별개의 a(num이 0일 때만 존재하는 a)
		//int a = 99;
		printf("a=%d\n", a);
		printf("num=%d\n", num);
	} //이 중괄호 벗어나면 a는 사라짐

	int a = 99; //별개의 a
	printf("a=%d\n", a); //num이 0일 때만 a가 존재함


	//if 주의 사항 2가지
	//1. if문 끝에 세미콜론 적지 말 것
	//2. ==이랑 = 헷갈리지 말 것
	//if(num=0) 이거랑 if(num==0)이건 완전 다른 것
	//if(num==0) 이건 num값이 0이면 참
	//if(num=0) 이건 num에 무조건 0을 대입하므로 무조건 거짓
	//if(num==1) 이건 num이 1일 경우 참
	//if(num=1) num에 1을 대입하므로 무조건 참이 되는 코드
	num = 0;
	if (num = 1)
		printf("이거 실행될까요????\n");


	return 0;
}
