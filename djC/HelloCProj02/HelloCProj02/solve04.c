#include<stdio.h>
#define BYTE 8 //��ũ�� ���
int main()
{
	int r = 10;
	//����� ���� �빮�ڷ� ���� ���� ����
	//����� �� �� �����ϰ� ���� ���� ������ �� ����
	const double PI = 3.14;//���
	//PI = 3.1415; //�̷������� ���� �� ��
	printf("���� �������� �Է��ϼ���.\n");
	scanf("%d", &r);
	printf("���� ���� : %f, ���� �ѷ�:%f\n", 
		r*r*PI, 2*r*PI);
	printf("�� ����Ʈ?");
	int byte;
	scanf("%d", &byte);
	printf("%d\n", byte * BYTE);

	//~~~~ ��������� �� �� �����ϴ�.
	//�����ϰ� �Է� ��ٸ��� �ִ� ���¿���
	//�ڵ� �����ϰ� �ٽ� �����Ϸ��� �ϸ� ������ ����.
	//���� �����ߴ� �� ���� �ٽ� �Ѿ� ��.
	const int MIN = 60;//60�� = 1��
	const int MONTH = 12;//1�� = 12����
	//123�� = 2�� 3��
	//��� �������� Ȱ���ϸ� ��
	printf("�� ��?");
	int sec;
	scanf("%d", &sec);
	printf("%d�� %d��\n", sec / MIN, sec % MIN);
	printf("�¾ ����, ���� ���� �Է�\n");
	int birth, year;
	scanf("%d %d", &birth, &year);
	printf("���� %d����\n", (year - birth) * MONTH);


	return 0;
}