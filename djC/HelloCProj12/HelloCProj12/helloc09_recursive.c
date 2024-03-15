//재귀 함수 : 자신을 호출하는 함수
//자기가 자기를 부르는 함수
//반드시 자기 자신을 그만부르는 조건을 추가해줘야 함
//무한대로 자기가 자신을 부르게 되면 stackoverflow라는 에러가 발생함
//피보나치수열이나 특정 알고리즘에서는 재귀함수가 더 효과적임
//다만 일반적으로는 반복문보다 속도가 느리므로 비추천
//예 1부터 n까지의 합을 구하는 코드를 재귀함수로 만들면 아래와 같다.
#include<stdio.h>
int atobSum(int n)
{
	if (n <= 0)
		return 0;
	return n + atobSum(n - 1);
}
int main()
{
	int a = atobSum(5);
	printf("a=%d\n", a);
	return 0;
}