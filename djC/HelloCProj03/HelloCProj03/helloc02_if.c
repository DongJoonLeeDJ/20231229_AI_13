//if : ���࿡
//If I were you, I'll take a shower.
#include<stdio.h>
int main()
{
	int num = 10;
	//int num = 9;
	
	//num = -1;
	//if (num > 0) printf("num�� 0���� ũ��\n"); //������ ������
	if (num > 0) //��ȣ �ȿ� ������ ������
		printf("num�� 0���� ũ��\n");//�ڵ� ����
	if (num % 2 == 0 && num > 0)
	{ //�����ؾ� �ϴ� �ڵ尡 2�� �̻��̸� �� �߰�ȣ ��� ��!
		printf("num�� �����\n");
		printf("num�� ¦����!\n");
	}

	//else : ��Ÿ
	//if ���ǿ� �ش����� ���� ��쿡 �����ϴ� �ڵ�
	num = 5;
	num = 10;
	if (num % 2 != 0)
		printf("Ȧ��\n");
	else
		printf("Ȧ�� �ƴ�\n");

	printf("num�� �Է�\n");
	scanf("%d", &num);
	if (num > 0)
		printf("num�� ���\n");
	else if (num == 0) //else if�� ���� �� �� �� �ִ�.
		printf("num�� 0\n");
	else
		printf("num�� ����\n");

	//1. ��ø : ���ǹ� �ȿ� ���ǹ�, �ݺ��� �ȿ� �ݺ���
	//�ݺ��� �ȿ� ���ǹ�, ���ǹ� �ȿ� �ݺ��� ���� ������
	if (num > 0 /*|| num<0*/)
	{
		if (num % 2 == 0)
			printf("¦��!!!\n");
		else
			printf("Ȧ��!!!\n");
	}
	else  //0�̰ų� ������ ��쿡�� ��� 0!!!!�� ���
	{
		printf("0!!!!\n");
	}


	//2. ������ ����
	//������ �ߺ� ������ �� �ȴ�.
	//���� : �߰�ȣ ������ �������� ��
	//num = 0;
	if (num == 0)
	{
		int num = 9999; //�ٱ��� num�� ������ num
		int a = 100; //������ a(num�� 0�� ���� �����ϴ� a)
		//int a = 99;
		printf("a=%d\n", a);
		printf("num=%d\n", num);
	} //�� �߰�ȣ ����� a�� �����

	int a = 99; //������ a
	printf("a=%d\n", a); //num�� 0�� ���� a�� ������


	//if ���� ���� 2����
	//1. if�� ���� �����ݷ� ���� �� ��
	//2. ==�̶� = �򰥸��� �� ��
	//if(num=0) �̰Ŷ� if(num==0)�̰� ���� �ٸ� ��
	//if(num==0) �̰� num���� 0�̸� ��
	//if(num=0) �̰� num�� ������ 0�� �����ϹǷ� ������ ����
	//if(num==1) �̰� num�� 1�� ��� ��
	//if(num=1) num�� 1�� �����ϹǷ� ������ ���� �Ǵ� �ڵ�
	num = 0;
	if (num = 1)
		printf("�̰� ����ɱ��????\n");


	return 0;
}
