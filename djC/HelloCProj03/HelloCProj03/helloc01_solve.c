#include<stdio.h>
int main()
{
	int a = 100;
	printf("a의 값 : %d, a의 위치 : %p\n", a,&a);


	//변수 num1, num2에 값을 입력하고
	//num1에 num2의 값을 넣고, num2에 num1의 값을 넣고
	//출력해보세요.
	//int num1 = 3, num2 = 5;
	//printf("num1=%d, num2=%d\n", num1, num2);
	int num1, num2;
	printf("두 개의 정수 입력\n");
	scanf("%d %d", &num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("num1=%d, num2=%d\n", num1, num2);




	int birthYear;
	printf("태어난 연도 입력\n");
	scanf("%d", &birthYear);
	birthYear % 2 == 0 ? printf("건강검진O\n") : printf("건강검진X");
	//예외처리 하는 방법은 여러가지
	//1. &&를 이용하는 방법(논리식을 활용한 방법)
	birthYear % 2 == 0 && birthYear>0 ? printf("건강검진O\n") : printf("건강검진X\n");
	//2. 중첩 질의
	birthYear % 2 == 0 ? 
		(birthYear==0?printf("zero\n"):printf("검진O\n")) 
		: printf("검진X\n");

	int n;
	char ch;
	printf("정수를 입력해주세요.\n");
	scanf("%d", &n);
	ch = n % 2 != 0 ? '1' : (n==0?'0':'2');
	printf("ch=%c\n", ch);

	int n1, n2;
	printf("두 정수 입력\n");
	scanf("%d %d", &n1, &n2);
	n2 > n1 ? printf("%d\n", n2 - n1) : printf("%d\n", n1 - n2);
	printf("%d\n", n2 > n1 ? n2 - n1 : n1 - n2);
	printf("몇 초?");
	int sec;
	scanf("%d", &sec);
	//sec >= 3600 || sec < 0 ? printf("error!\n") : printf("%d분%d초\n", sec / 60, sec % 60);
	sec >= 3600 || sec < 0 ? printf("error!\n") 
		: printf("%d분%d초\n", sec / 60, sec % 60);


	
	return 0;
}