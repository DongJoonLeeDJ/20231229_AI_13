#include<stdio.h>
static int aa = 0; //���������� static ������
//�ٸ� c ���Ͽ��� ������ �� ��

void testStaticVar(int c) //�Ű����� ���� testStaticVar�� ������ �������
{						  //main�� �������� ������ ����
	int a = 0; //a�� testStaticVar�� ������ �����
	static int b = 0; //b�� testStaticVar�� ������ ���α׷� ����ñ��� ������� ����
	a++;
	b++;
	c++;
	aa++;
	printf("%d %d %d %d\n", a, b, c, aa);

	//static Ű���尡 ���� ���� Ȥ�� ���������� data������ ���ϰ�
	//data ������ �ִ� ������ ���α׷��� ���������� �������.
	
	//����� ���� ��� �޸𸮿� �ö���� ������ �� ����
}
//�׷��ٸ�...!!! ���࿡... ���� ������ static�� �ٴ´ٸ�?
//static�� ���� ���� ���������� static�� ���� ���� ������ ���̴� �����??

int main()
{
	int c = 0;
	testStaticVar(c);
	testStaticVar(c);
	testStaticVar(c);
	return 0;
}