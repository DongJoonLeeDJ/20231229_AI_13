#include<stdio.h>
int main()
{
	//4-3. char ch 라는 변수와 정수 변수 선언 후, 정수 값을 짝수 입력하면 ch에 2, 홀수 입력하면 ch에 1, 0일 경우에는 0을 입력 후 그 값을 출력한다.
	int num;
	char ch;
	printf("4-3. 정수 입력\n");
	scanf("%d", &num);
	if (num == 0)
		ch = '0';
	else if (num % 2 == 1) //홀수
	//else if (num%2!=0) //같은 코드임(홀수체크)
		ch = '1';
	else
		ch = '2'; //이 경우엔 else 필요!
	//왜냐면 else가 없으면 ch 값이 할당되지 않으므로
	//ch를 출력할 수 없기 때문이다!!!
	printf("ch=%c\n", ch);

	//참고
	//if else if else와 if if else의 차이점
	//위의 코드는 ch가 0,1,2 중 하나의 값을 가짐
	//아래 코드는 num이 0일 경우에도 밑의 else 때문에 ch가 2가 됨!
	if (num == 0)
		ch = '0';
	if (num % 2 == 1) 
		ch = '1';
	else
		ch = '2';
	printf("(참고)ch=%c\n", ch);


	return 0;
}