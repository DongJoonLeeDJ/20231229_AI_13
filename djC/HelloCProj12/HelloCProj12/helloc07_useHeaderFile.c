#include"myheader.h"
//#include"myheader.h"
//#include"myheader.h"
//#include"myheader.h"
//#include<stdio.h> //#prgma once ���п� stdio.h��
//�� �־ ������ ���� �ʴ´�.
#include"myheader2.h"

//extern : �ܺ���
//�ٸ� ���Ͽ� �ִ� ������ �о�´ٴ� ��
extern a;
extern b;
extern c;
extern d;
int main()
{
	//sumAtoB�� �� ���� �ȿ��� ������
	//myheader.h�� �ִ�.
	//�׸��� printf�� myheader.h���� stdio.h�� �����ϰ�
	//�����Ƿ� ����� �� �ִ�.
	printf("%d\n", sumAtoB(1, 10));
	printNum(100);
	int nums[] = { 10,2,-4,100,5 };
	printArr(nums, sizeof(nums) / sizeof(int));
	printAndIncrease();
	a++;
	b++; //�� ������ ������
	c++;
	//printf("%d\n", d); //��µ� �� ��
	//d++; //���� ��ü�� �� ��
	//���� : static�� ������ �ٸ� ���Ͽ��� �ش� ������
	//������ �Ұ���
	//�ش� ������ ������ �� �ִ� ���� 
	//�� ������ ������ header�����̳�
	//�� header������ �Լ��� ������ c���Ͽ����� ������
	printAndIncrease();
	printAndIncrease();
	printAndIncrease();
	return 0;
}