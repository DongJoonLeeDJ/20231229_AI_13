#include<stdio.h>
int main()
{
	int a, b;
	int* pa;
	int* pb; //a�� b�� �ּҸ� ������ ����(=������)
	pa = &a;
	pb = &b;

	printf("a�� b �Է�\n");
	scanf("%d %d", pa, pb); //scanf("%d %d", &a, &b);
	printf("%d %d %d %d\n", a, b, *pa, *pb);

	//������ ������ ���Ŀ� �Լ������� ������ �ǰ�
	//�迭�� �Լ��� ������� �� ���� linked list�� ����
	//��ȭ ����, �ڷ� ���� ���� ���ν� �ſ� �߿��� ����
	return 0;
}