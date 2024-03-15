#include<stdio.h>
int main()
{
	//증감 연산자
	//1을 더하거나 뺄 때 간결하게 표현하는 것
	int a = 0;
	a = a + 2; // a =2 
	a += 2; // a=4
	a++; //a=5 //증감연산자
	a = a + 1; //a=6
	a += 1;//a=7
	++a;//a=8 //증감연산자
	printf("a=%d\n", a);
	a--;//a=7 증감연산자
	--a;//a=6 증감연산자
	a -= 1;//a=5
	a = a - 1; //a=4
	printf("a=%d\n", a);
	a -= 4; //a=a-4; a=0
	printf("a=%d\n", a);
	a = 10;
	a *= 5; // a = a*5;
	printf("a=%d\n", a); //a=50
	a /= 2; // a= a/2;
	printf("a=%d\n", a); //a=25

	a %= 3; // a = a%3
	printf("a=%d\n", a);

	int sum = 0;
	sum = a++ + ++a + ++a + a++;//visual studio냐 혹은 devc++이냐에 따라서
	//결과가 달라질 수 있다.
	//따라서 문제가 나올 땐 단순히 a++과 ++a의 차이만 구분할 수 있으면
	//풀 수 있다.
	printf("a=%d, sum=%d\n",a,sum); //a=3, sum=4
	a = 0;
	printf("a=%d\n", ++a); //++이나 --가 앞에 있으면 더하거나 빼기를 먼저함
	printf("a=%d\n", a++); //++이나 --가 뒤에 있으면 화면에 뿌리고 그 다음에 더함
	printf("a=%d\n", a);

	//실무에서는 코드의 가독성이 가장 중요하므로 보통은 a++, a--로 통일을 한다.
	//그리고 ++이 앞에 붙든 뒤에 붙든 두 줄로 나눠서 작업하면 결과는 무조건 똑같음.
	a = 0;
	a++;
	printf("a=%d\n", a); //a에 1더하고 출력한다는 점은 다 똑같음
	++a;
	printf("a=%d\n", a); //a에 1더하고 출력한다는 점은 다 똑같음


	return 0;
}