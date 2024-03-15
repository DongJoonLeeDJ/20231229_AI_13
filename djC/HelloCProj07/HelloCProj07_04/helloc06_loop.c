#include<stdio.h>
int main()
{
	//반복문 : 조건문과 주로 세트로 쓰이며 매우 중요한 문법
	//java, c#, c, c++이 다 비슷비슷함
	//javaScript도 이와 유사함
	//반복문은 동일한 코드를 여러번 반복하거나
	//특정한 규칙을 가진 코드를 여러 번 반복할 때 사용됨
	//종류 : for, while, do while
	for (int i = 0; i < 10; i++) //for 안에 있는 i는 for문 끝나면 없어짐
	{
		printf("안녕하세요!");
		printf("i는 %d입니다.\n", i);
	}
	//for,if,switch, while, do while : 끝에 세미콜론이 붙지 않음
	//괄호 안에 있는 조건이 충족되면 실행되는 코드가 2줄 이상일 때
	//중괄호로 묶습니다.
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	printf("1부터 10까지의 값 : %d\n", sum);

	//while이랑 do while 몰라도 for만으로도 원하는 반복 코드 작성 가능
	//if랑 switch랑은 다르게 for 와 while은 서로 차이 없다.

	//중첩도 가능함(if문처럼 for, while 등도 중첩이 가능함)
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	//~하는 동안에 : while
	//괄호 안에 조건에 따라서 반복문을 얼만큼 수행할 지 결정을 함
	int a = 0;
	while (a < 10) //조건에 따라서 한 번도 실행 안 하기도 함
	{
		a++;
		printf("a=%d\n", a);
	}
	//while (1) //무한 반복
	//	printf("???");
	do //괄호 안에 있는 값이 거짓이어도 무조건 한 번은 실행
	{
		printf("a=%d\n", a); 
	} while (a<10);










	return 0;
}