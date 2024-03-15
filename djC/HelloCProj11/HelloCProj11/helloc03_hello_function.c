// �Լ� : ����� �̸� �����س��� �ʿ��� �� ���� �ҷ��� ���� ��
// function = �Լ�, ���
// f(x) = 2x+5 �� �� x�� ����, f(x)�� �츮�� �Լ���� �θ�(���п�����)
//f(x)������ x�� �Ű�������� ��

//1���� 10������ ���� ���ϴ� �ڵ���� �Լ��� Ȱ���ؼ� �Ẽ ��
//�Լ��� ���°� 4������ �ִ�.
//�Ű������� ��ȯ��(=return)�� �ִ� ��
//�Ű������� �ִ� ��
//��ȯ��(=return)�� �ִ� ��
//�Ű������� ��ȯ��(=return) �� �� ���� ��

//��� �츰 �̹� �Լ��� ���� �ִ�.
//printf, scanf�� �Լ�!!! �ٸ� �� �� C��� ������ �̸� �����س��� �Լ�(=���)

//�Լ� = ����� ���� ����̶�� ���� �� ����!!!
#include<stdio.h>
//1. �Ű������� ��ȯ���� �ִ� ������ �Լ�
//�Ű����� : �Լ��� ��ȣ �ȿ� �ִ� �������� �ǹ�
//��ȯ�� : return �ڿ� ���� �� �ǹ��ϰ�, �� �Լ��� �θ� �ʿ� ���� �ִ� ��
int sumAtoB(int a, int b) //�� int�� �ǹ� : ��ȯ���� Ÿ���� int(����)��� ���� �ǹ�
{
	if (a > b)
		return -1;
	//return 0;
	int result = 0;
	for (int i = a; i <= b; i++)
	{
		result += i;
	}
	return result;
}

//void : ����, �������
//return�� ����
//���� �������Ḧ �ϰ� �ʹٸ� return; �� ����� ��
//return;�� ��ȯ���ִ� ��(=�ִ� ��)�� ���ٴ� ��, �׳� ����

//�̷������� �Լ� ��ü�� ���� �� '����' Ȥ�� '����'
//main �ȿ� �Լ��̸�(�Ű�����); �̷��� ���� �� 'ȣ��' Ȥ�� '��'�Ѵٶ�� ��.
//2. �Ű������� �ִ� ��
void sumAtoBvoid(int a, int b)
{
	int voidresult = 0;
	for (int i = a; i <= b; i++)
		voidresult += i;
	printf("%d���� %d������ �� : %d\n", a, b, voidresult);
}

//3. ��ȯ���� �ִ� ��
int sum1To10() //������ 1���� 10������ ���� ��ȯ
{
	int mysum1To10 = 0;
	for (int i = 1; i <= 10; i++)
		mysum1To10 += i;
	return mysum1To10;
}
//4. �� �� ���� ��
void sum1to10void()
{
	int voidvoidresult = 0;
	for (int i = 1; i <= 10; i++)
		voidvoidresult += i;
	printf("%d���� %d������ �� : %d\n", 1, 10, voidvoidresult);
}


int main() //main�� �Լ�
{
	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;
	printf("sum=%d\n", sum);
	int mysum = sumAtoB(1, 10);
	printf("mysum=%d\n", mysum);
	printf("mysum=%d\n", sumAtoB(1, 10));
	sumAtoBvoid(1, 10);
	int myresult = sum1To10();
	printf("myresult=%d\n", myresult);
	sum1to10void();
	return 0; //return 0 : main�̶�� �Լ��� 0�� ��ȯ�ϴ� �� �ǹ���
	//��ȯ�� �ǹ� : �ش� �Լ��� �ҷ����� �ʿ��ٰ� �� ���� �ִ� ��
}