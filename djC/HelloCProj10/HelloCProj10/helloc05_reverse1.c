#include<stdio.h>
int main()
{
	printf("거꾸로 출력할 문자열을 입력하세요\n");
	char input[1000];
	char reverseInput[1000];
	gets(input);
	int reverseIndex = 0; //거꾸로 부터 셀 때 필요한 정수 변수
	//reverseIndex 구하는 방법 2가지가 있음
	//1. for문 이용하는 방법
	//for 끝에 세미콜론은 넣지 않는 게 좋다.
	//그러나 이 경우에는 reverseIndex 값이 중요하므로
	//세미콜론을 해도 됨
	//세미콜론이 싫다면 그냥 {}를 써도 됨
	
	//for (reverseIndex = 0; input[reverseIndex] != NULL; reverseIndex++);
	//for (reverseIndex = 0; input[reverseIndex] != NULL; reverseIndex++){}

	//2. while 문 활용하는 방법
	while (input[reverseIndex] != NULL)
		reverseIndex++; //하나씩 증가 -> 원래 입력한 문자열의 길이 구하기
	int i = 0; //reverseInput에 들어갈 문자에 대한 인덱스
	for (; reverseIndex > 0; i++)
	{
		reverseInput[i] = input[reverseIndex - 1];
		reverseIndex--;
	}
	reverseInput[i] = NULL;
	printf("%s %s\n", input, reverseInput);



	return 0;
}