#include<stdio.h>
int main()
{
	//ctrl + F5 눌러서 실행 = 주석 (=설명)
	printf("Hello World\n");

	// 이건 주석이라고 함
	// 컴퓨터가 아니라 사람한테만 보이는 글
	// 수업시간에 이건 따라 적지 마세요.
	// 부가적인 설명을 여기에 전부 적을 예정
	/*
	이 안에
	여러 줄 쓸 수 있으나
	보통은 //를 쓴다.
	*/
	printf("%d\n", 10 + 3);
	printf("%d\n", 10 - 3);
	printf("%d\n", 10 * 3);//ctrl + d
	printf("%d\n", 10 / 3);//ctr+c 와 ctrl+v
	printf("%d\n", 10 % 3);

	//분자나 분모 하나 이상은 소수점으로 표기해야
	//실수로서 연산을 한다.
	//%lf나 %f 로 출력해야 함
	printf("%f\n", 10.0 / 3);
	printf("%f\n", 10.0 / 3.0);
	printf("%f\n", 10 / 3.0);
	printf("%lf\n", 10 / 3.0);

	return 0;
}