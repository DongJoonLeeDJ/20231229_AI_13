#include<stdio.h>
int main()
{
	int age;
	//scanf_s : visual studio 용 권장 문법
	//& : 해당 변수의 주소
	scanf_s("%d", &age); //scanf:표준 문법
	printf("%d", age);
	return 0;
}