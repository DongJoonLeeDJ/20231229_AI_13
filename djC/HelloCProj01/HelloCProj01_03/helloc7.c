//scanf_s�� visual studio�� ����
//ǥ���� scanf�Դϴ�.
//������Ʈ�κ� ���콺 ��Ŭ�� -> �Ӽ�
//C/C++ -> sdl �˻� "�ƴϿ�"�� ����
//scanf_s�� �ƴ϶� scanf�� �� �� ����
#include<stdio.h>
int main()
{
	printf("����� ���̸� �Է��ϼ���.");
	int age;
	scanf("%d", &age);
	printf("����� Ű�� �Է��ϼ���.");
	double h;//lf=long float, f = float
	scanf("%lf", &h);
	//.2 �Ҽ��� �� ��° �ڸ����� ��Ÿ��(�ݿø�)
	printf("����:%d, Ű:%.2f\n", age, h);
	printf("����� �¾ ������ ���� ������ �Է��ϼ���.");
	int birth, now;
	//scanf("%d %d", &birth, &now);//1989 2024
	scanf("%d,%d", &birth, &now);//1989,2024
	printf("����:%d\n", now - birth);
	return 0;
}