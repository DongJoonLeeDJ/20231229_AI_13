//7. 5���� ������ �Է� ��, �� �߿��� ���� ū ���� ����Ͻÿ�.
#include<stdio.h>
int main()
{

	int a, b, c, d ,e;
	printf("7. ���� 5�� �Է�\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int max = a; //ù��° ���� ���� ū ���� ����
	if (max < b) //b�� �� ũ�ٸ� ��ü
		max = b;
	if (max < c) //c�� �� ũ�ٸ� ��ü
		max = c;
	if (max < d) //d�� �� ũ�ٸ� ��ü
		max = d;
	if (max < e) //e�� �� ũ�ٸ� ��ü
		max = e;
	printf("���� ū �� : %d\n", max);


	//� �� �� ū �� ���� �� �� �ʹٸ�...
	char maxch = 'a';
	max = a; //ù��° ���� ���� ū ���� ����
	if (max < b) //b�� �� ũ�ٸ� ��ü
	{
		max = b;
		maxch = 'b';
	}
	if (max < c) //c�� �� ũ�ٸ� ��ü
	{
		max = c;
		maxch = 'c';
	}
	if (max < d) //d�� �� ũ�ٸ� ��ü
	{
		max = d;
		maxch = 'd';
	}
	if (max < e) //e�� �� ũ�ٸ� ��ü
	{
		max = e;
		maxch = 'e';
	}
	printf("���� ū ��(%c) : %d\n", maxch,max);

	return 0;
}