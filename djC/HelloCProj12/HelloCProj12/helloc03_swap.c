#include<stdio.h>
void swap2(int*, int*);
void swap3(int* a, int* b); 
void swap(int* a, int* b) 
{
	//�����Ͱ� ������ swap������ �����ϴ� ����
	//�� �Լ��� �ִ� a�� b�� �� �Լ����� �����ϴ� �����̱�� �ϳ�
	//�� ������ �����ϴ� �� main�� �ִ� ������ �ּ��̹Ƿ�
	//�� �����ϸ� main�� ������ �ش�.
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3, b = 5;
	printf("a=%d, b=%d\n", a, b);
	swap(&a, &b); //�����ʹ� �ּҸ� �����ϴ� �����̹Ƿ� �ּҸ� �Ѱ��ش�.
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap3(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}