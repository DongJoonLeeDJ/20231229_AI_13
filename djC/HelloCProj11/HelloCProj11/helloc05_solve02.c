#include<stdio.h>
//곱 같은 경우에는 값이 매우 크므로 반환형은 long long이
//좋을 수도 있다.(참고할 것)
int gobsum(int a, int b)
{
	int sum = 1;
	for (int i = a; i <= b; i++)
		sum *= i;
	return sum;
}
int oneToTenSum()
{
	//내가 따로 이 안에 scanf를 적지 않는 이상
	//무조건 결과는 똑같음
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	return sum;
}
void printGobSum(int a, int b)
{
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	printf("%d부터 %d까지의 곱 : %d\n", a, b, sum);
}
void printGobSum2(int a, int b) //함수 안에서 또 다른 함수 호출 가능
{
	int sum = gobsum(a, b);
	printf("%d부터 %d까지의 곱 : %d\n", a, b, sum);
}
void printGobOneToTen()
{
	printf("1부터 10까지의 곱 : %d\n", oneToTenSum());
}
int main()
{
	int result = gobsum(1, 10);
	printf("1부터 10까지의 곱 : %d\n", result);
	printf("1부터 10까지의 곱 : %d\n", oneToTenSum());
	printGobSum(1,10);
	printGobSum2(1, 10);
	printGobOneToTen();
	return 0;
}