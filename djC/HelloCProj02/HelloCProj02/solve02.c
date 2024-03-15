#include<stdio.h>
int main()
{
	int a, b;
	printf("두 수를 입력하세요. 예)10 3\n");
	scanf("%d %d", &a, &b);
	printf("%d %d %d %d %d %f\n",
		a+b,a*b,a-b,a%b,a/b,((float)a)/b);//명시적형변환
	//printf("%d %d %d %d %d %f %f\n",
	//	a+b,a*b,a-b,a%b,a/b,((float)a)/b, a/b);
	//묵시적 형변환
	char ex = 65;//65라는 값이 자동으로 char 형으로 변환이 되서 들어감
	int exnum = 'a';
	printf("%c %d\n", ex, exnum);
	printf("당신의 이름 첫글자는?\n");
	char lastName;
	//문자 입력 전에 정수나 실수를 입력한 적이 있다면
	//rewind를 해줘야 정상적으로 문자를 입력받을 수 있다.
	//참고로 문자를 입력하고 다음 문자 입력할 때도 rewind써준다.
	rewind(stdin);//버퍼에 있는 \n 제거(혹은 입력 포인터 초기화)
	scanf("%c", &lastName);
	printf("Last Name의 첫글자는 %c입니다.\n", lastName);

	printf("a와 b의 값을 다시 입력하세요.\n");
	scanf("%d %d", &a, &b);//rewind 필요없음
	printf("%d^2 + %d^2 = %d\n", a, b, a * a + b * b);
	int c = (a * a) + (b * b);
	printf("%d^2 + %d^2 = %d\n", a, b, c);
	//한 줄 다 지우기(=잘라내기, ctrl X)
	//잘라내기 : 삭제 및 복사

	//연산의 우선순위 : 곱하기랑 나누기 먼저하고
	//그 다음이 더하기 빼기인 데,
	//제일 좋은 건, 먼저 연산하고 싶은 걸 괄호로 묶는 것!

	int z = (a * a * a) + (b * b * b);
	//a*a*a+b*b*b 해도 됨.
	//shift + 6 = ^ 
	//제곱 표시
	//나중에 배우겠지만 XOR 표시도 됨
	printf("%d^3 + %d^3 = %d\n", a, b, z);


	return 0;
}