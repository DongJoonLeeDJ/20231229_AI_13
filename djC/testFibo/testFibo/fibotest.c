#include<stdio.h>
#include<stdlib.h>
long long f(int num)
{
	if (num <= 0)
		return 0;
	if (num <= 2)
		return 1;
	return f(num - 2) + f(num - 1);
}
long long memo[50];
long long* dymemo;

long long fibo(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;
	if (memo[n] == 0)
	{
		memo[n] = fibo(n - 2) + fibo(n - 1);
		return memo[n];
	}
	else
	{
		return memo[n];
	}
}

long long dyfibo(int n)
{
	if (n <= 0)
		return 0;
	if (n <= 2)
		return 1;
	if (dymemo[n] == 0)
	{
		dymemo[n] = dyfibo(n - 2) + dyfibo(n - 1);
		return dymemo[n];
	}
	else
	{
		return dymemo[n];
	}
}
int main()
{
	int size = 43;
	dymemo = (long long*)calloc(size, sizeof(int) * size);
	printf("%lld\n", fibo(43));
	printf("%lld\n", dyfibo(size));
	printf("%lld\n", f(43));

	return 0;
}