#include<stdio.h>
int main()
{
	int a = 100;
	printf("a�� �� : %d, a�� ��ġ : %p\n", a,&a);


	//���� num1, num2�� ���� �Է��ϰ�
	//num1�� num2�� ���� �ְ�, num2�� num1�� ���� �ְ�
	//����غ�����.
	//int num1 = 3, num2 = 5;
	//printf("num1=%d, num2=%d\n", num1, num2);
	int num1, num2;
	printf("�� ���� ���� �Է�\n");
	scanf("%d %d", &num1, &num2);
	printf("num1=%d, num2=%d\n", num1, num2);
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("num1=%d, num2=%d\n", num1, num2);




	int birthYear;
	printf("�¾ ���� �Է�\n");
	scanf("%d", &birthYear);
	birthYear % 2 == 0 ? printf("�ǰ�����O\n") : printf("�ǰ�����X");
	//����ó�� �ϴ� ����� ��������
	//1. &&�� �̿��ϴ� ���(������ Ȱ���� ���)
	birthYear % 2 == 0 && birthYear>0 ? printf("�ǰ�����O\n") : printf("�ǰ�����X\n");
	//2. ��ø ����
	birthYear % 2 == 0 ? 
		(birthYear==0?printf("zero\n"):printf("����O\n")) 
		: printf("����X\n");

	int n;
	char ch;
	printf("������ �Է����ּ���.\n");
	scanf("%d", &n);
	ch = n % 2 != 0 ? '1' : (n==0?'0':'2');
	printf("ch=%c\n", ch);

	int n1, n2;
	printf("�� ���� �Է�\n");
	scanf("%d %d", &n1, &n2);
	n2 > n1 ? printf("%d\n", n2 - n1) : printf("%d\n", n1 - n2);
	printf("%d\n", n2 > n1 ? n2 - n1 : n1 - n2);
	printf("�� ��?");
	int sec;
	scanf("%d", &sec);
	//sec >= 3600 || sec < 0 ? printf("error!\n") : printf("%d��%d��\n", sec / 60, sec % 60);
	sec >= 3600 || sec < 0 ? printf("error!\n") 
		: printf("%d��%d��\n", sec / 60, sec % 60);


	
	return 0;
}