#include<stdio.h>
#define WORLDCUP 2002 //��ũ�� ���
//�����Ϸ��� �����ϱ� ���� �о���̴� ���
//�������� ���Ѵٴ� ���� const �̿��� �Լ��� �Ȱ�����
//const���� �޸𸮿� �̸� �ö��ִ�.
int main()
{
	/*int a, b;
	a = 3;
	b = 5;*/
	//int a = 3, b = 5;
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	printf("a=%d b=%d\n", a, b);
	printf("%d\n", a);
	printf("%d\n", b);
	int c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);

	a = 9999999999; //99���� 4byte�� ���� �� �ִ� ���� �ƴ�...
	//����� c�� int�� long�� �� �� 4byte�̴�.
	//�����÷ο�� ����÷ο� ���䶧���� �̻��� ���� ��µ�

	long long aa = 9999999999;//long long�� 8byte �����̰�
	//c#, java������ �׳� long �̶�� ����
	printf("%d %lld\n", a, aa);

	//���
	//�� �� �����ϰ� ���� ������ �ʴ� ��
	//���� �빮�ڷ� ����, �������� ���ؼ� ���� �����
	const double PI = 3.14;//�������� ���� 3.14�� ���� ��
	const int DJBYEAR = 1989;
	const PI2 = 3.1415;
	const DJYEAR = 1989;
	//PI = 3.1415; //���� �Ұ���
	int r = 5; //�� ���� ������ ��  r
	printf("�������� %d�� ���� ���� : %f\n", r, r * r * 3.14);
	printf("�������� %d�� ���� ���� : %f\n", r, r * r * PI);
	printf("%d�⵵ ���� �̵����� ���� : %d\n", 2024, 2024 - DJYEAR);
	printf("4�� ��ȭ�� �߻��� �� %d�⵵\n", 2024 - WORLDCUP);

	return 0;
}