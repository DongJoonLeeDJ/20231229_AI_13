#include <stdio.h> 
#define MAXSIZE 10 // 큐의 크기 
int queue[MAXSIZE];
int front, rear;

//큐 초기화
void init_queue(void) 
{
	front = rear = 0;
}
void clear_queue(void) 
{
	front = rear;
}

int put(int val) {
	if ((rear + 1) % MAXSIZE == front) { // 큐가 꽉 찼는지 확인 
		printf(" Queue Overflow."); return -1;
	}
	queue[rear] = val; // rear가 큐의 끝 다음의 빈공간이므로 바로 저장 
	rear = ++rear % MAXSIZE; // rear를 다음 빈공간으로 변경 
	return val;
}

int get(void) {
	int i; 
	if (front == rear) { // 큐가 비어 있는지 확인 
		printf(" Queue Underflow."); return (-1);
	}
	i = queue[front];
	// front의 값을 가져옴 
	front = ++front % MAXSIZE; // front를 다음 데이터 요소로 
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
	clear_queue(); //큐 초기화
	print_queue(); 
	printf("\nNow queue is empty, get\n"); 
	i = get(); 
	print_queue(); 
	printf("\nget value is %d\n", i);

}

