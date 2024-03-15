// 함수 : 기능을 미리 구현해놓고 필요할 때 마다 불러서 쓰는 것
// function = 함수, 기능
// f(x) = 2x+5 할 때 x는 변수, f(x)를 우리는 함수라고 부름(수학에서는)
//f(x)에서의 x를 매개변수라고도 함

//1부터 10까지의 합을 구하는 코드들을 함수를 활용해서 써볼 것
//함수의 형태가 4가지가 있다.
//매개변수랑 반환형(=return)이 있는 것
//매개변수만 있는 것
//반환형(=return)만 있는 것
//매개변수랑 반환형(=return) 둘 다 없는 것

//사실 우린 이미 함수를 쓰고 있다.
//printf, scanf도 함수!!! 다만 이 건 C언어 측에서 미리 제공해놓은 함수(=기능)

//함수 = 사용자 정의 기능이라고도 말할 수 있음!!!
#include<stdio.h>
//1. 매개변수와 반환형이 있는 형태의 함수
//매개변수 : 함수의 괄호 안에 있는 변수들을 의미
//반환형 : return 뒤에 오는 걸 의미하고, 이 함수를 부른 쪽에 값을 주는 것
int sumAtoB(int a, int b) //앞 int의 의미 : 반환형의 타입이 int(정수)라는 것을 의미
{
	if (a > b)
		return -1;
	//return 0;
	int result = 0;
	for (int i = a; i <= b; i++)
	{
		result += i;
	}
	return result;
}

//void : 공허, 비어있음
//return이 없음
//만약 강제종료를 하고 싶다면 return; 을 쓰기는 함
//return;은 반환해주는 것(=주는 것)이 없다는 뜻, 그냥 종료

//이런식으로 함수 자체를 적는 걸 '정의' 혹은 '선언'
//main 안에 함수이름(매개변수); 이렇게 쓰는 걸 '호출' 혹은 '콜'한다라고 함.
//2. 매개변수만 있는 것
void sumAtoBvoid(int a, int b)
{
	int voidresult = 0;
	for (int i = a; i <= b; i++)
		voidresult += i;
	printf("%d부터 %d까지의 합 : %d\n", a, b, voidresult);
}

//3. 반환형만 있는 것
int sum1To10() //무조건 1부터 10까지의 합을 반환
{
	int mysum1To10 = 0;
	for (int i = 1; i <= 10; i++)
		mysum1To10 += i;
	return mysum1To10;
}
//4. 둘 다 없는 것
void sum1to10void()
{
	int voidvoidresult = 0;
	for (int i = 1; i <= 10; i++)
		voidvoidresult += i;
	printf("%d부터 %d까지의 합 : %d\n", 1, 10, voidvoidresult);
}


int main() //main도 함수
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	printf("sum=%d\n", sum);
	int mysum = sumAtoB(1, 10);
	printf("mysum=%d\n", mysum);
	printf("mysum=%d\n", sumAtoB(1, 10));
	sumAtoBvoid(1, 10);
	int myresult = sum1To10();
	printf("myresult=%d\n", myresult);
	sum1to10void();
	return 0; //return 0 : main이라는 함수가 0을 반환하는 걸 의미함
	//반환의 의미 : 해당 함수를 불러들인 쪽에다가 그 값을 주는 것
}