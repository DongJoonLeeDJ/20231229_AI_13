#include <stdio.h> 
#define MAXSIZE 10 // ť�� ũ�� 
int queue[MAXSIZE];
int front, rear;

//ť �ʱ�ȭ
void init_queue(void) 
{
	front = rear = 0;
}
void clear_queue(void) 
{
	front = rear;
}

int put(int val) {
	if ((rear + 1) % MAXSIZE == front) { // ť�� �� á���� Ȯ�� 
		printf(" Queue Overflow."); return -1;
	}
	queue[rear] = val; // rear�� ť�� �� ������ ������̹Ƿ� �ٷ� ���� 
	rear = ++rear % MAXSIZE; // rear�� ���� ��������� ���� 
	return val;
}

int get(void) {
	int i; 
	if (front == rear) { // ť�� ��� �ִ��� Ȯ�� 
		printf(" Queue Underflow."); return (-1);
	}
	i = queue[front];
	// front�� ���� ������ 
	front = ++front % MAXSIZE; // front�� ���� ������ ��ҷ� 
	return i;
}

void print_queue(void)
{
	int i; printf("\nprint Queue From Front------> To Rear ");
	for (i = front; i != rear; i = ++i % MAXSIZE)
		printf("%-6d", queue[i]);
}

void main()
{
	int i;
	printf(" Put 5, 4, 7, 8, 2, 1\n"); 
	put(5); put(4); 	put(7); 	put(8); 	put(2); 	put(1); 
	print_queue();
	printf("\nGet\n"); 
	i = get(); 
	print_queue(); 
	printf("\nget value is %d\n", i); 
	printf(" Put 3, 2, 5, 7\n"); 
	put(3);	put(2);	put(5); 	put(7);	
	print_queue(); 
	printf("\nNow queue is full, put 3\n"); 
	put(3); 
	print_queue(); 
	printf("\nInitialize Queue\n"); 
	clear_queue(); //ť �ʱ�ȭ
	print_queue(); 
	printf("\nNow queue is empty, get\n"); 
	i = get(); 
	print_queue(); 
	printf("\nget value is %d\n", i);

}

