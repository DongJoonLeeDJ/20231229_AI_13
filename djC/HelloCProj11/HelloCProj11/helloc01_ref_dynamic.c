#include<stdio.h>
#include<stdlib.h> //���� �Ҵ綧 �ʿ�
#define MAXSIZE 1024
int main()
{
	int n;
	printf("n�� ����?\n");
	scanf_s("%d", &n);
	//int numbers[n];
	int* numbers = (int*)malloc(sizeof(int) * n); //heap�̶�� ������ �޸𸮸� �Ҵ�����
	//���� �Է��� ũ�⸸ŭ �迭 ũ�� ���� ����
	//����� �̿��Ͽ� ũ�� �Ҵ��ϴ� �� '����'�̶�� �޸� ������ �޸𸮸� �Ҵ�����
	int mynums[1024];
	int mynums2[MAXSIZE];
	return 0;
}