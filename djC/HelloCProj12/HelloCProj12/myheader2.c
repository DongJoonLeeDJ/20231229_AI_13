#include"myheader2.h"
a = 0;
b = 0;
int c = 0;
static int d = 0;
void printNum(int n)
{
	printf("%d\n", n);
}
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("[%d]=%d\n", i, arr[i]);
	}
}
void printAndIncrease()
{
	a++;
	b++;
	c++;
	d++;
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b,c,d);
}