#include<stdio.h>
int main()
{
	int a, b;
	printf("�� ���� �Է��ϼ���. ��)10 3\n");
	scanf("%d %d", &a, &b);
	printf("%d %d %d %d %d %f\n",
		a+b,a*b,a-b,a%b,a/b,((float)a)/b);//���������ȯ
	//printf("%d %d %d %d %d %f %f\n",
	//	a+b,a*b,a-b,a%b,a/b,((float)a)/b, a/b);
	//������ ����ȯ
	char ex = 65;//65��� ���� �ڵ����� char ������ ��ȯ�� �Ǽ� ��
	int exnum = 'a';
	printf("%c %d\n", ex, exnum);
	printf("����� �̸� ù���ڴ�?\n");
	char lastName;
	//���� �Է� ���� ������ �Ǽ��� �Է��� ���� �ִٸ�
	//rewind�� ����� ���������� ���ڸ� �Է¹��� �� �ִ�.
	//����� ���ڸ� �Է��ϰ� ���� ���� �Է��� ���� rewind���ش�.
	rewind(stdin);//���ۿ� �ִ� \n ����(Ȥ�� �Է� ������ �ʱ�ȭ)
	scanf("%c", &lastName);
	printf("Last Name�� ù���ڴ� %c�Դϴ�.\n", lastName);

	printf("a�� b�� ���� �ٽ� �Է��ϼ���.\n");
	scanf("%d %d", &a, &b);//rewind �ʿ����
	printf("%d^2 + %d^2 = %d\n", a, b, a * a + b * b);
	int c = (a * a) + (b * b);
	printf("%d^2 + %d^2 = %d\n", a, b, c);
	//�� �� �� �����(=�߶󳻱�, ctrl X)
	//�߶󳻱� : ���� �� ����

	//������ �켱���� : ���ϱ�� ������ �����ϰ�
	//�� ������ ���ϱ� ������ ��,
	//���� ���� ��, ���� �����ϰ� ���� �� ��ȣ�� ���� ��!

	int z = (a * a * a) + (b * b * b);
	//a*a*a+b*b*b �ص� ��.
	//shift + 6 = ^ 
	//���� ǥ��
	//���߿� �������� XOR ǥ�õ� ��
	printf("%d^3 + %d^3 = %d\n", a, b, z);


	return 0;
}