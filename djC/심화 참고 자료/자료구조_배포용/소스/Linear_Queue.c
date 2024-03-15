#include<stdio.h>
#define MAXSIZE 5 // 큐의 크기 
int queue[MAXSIZE];
int front = -1, rear = -1;
void put(int val)
{
	if (rear >= MAXSIZE - 1)
	{
		printf(" Queue Overflow"); 
		return (-1);
	}
	queue[++rear] = val;
}
int get()
{
	if (rear == front)
	{
		printf(" Queue Underflow"); 
		return -1;
	}
	return queue[++front];
}


void main()
{
	printf(" Put 5, 4, 7, 8, 2\n");
	put(5);
	put(4);
	put(7); 
	put(8);
	put(2);
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());
	printf("%d\n", get());

}
