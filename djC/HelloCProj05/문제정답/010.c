#include<stdio.h>
int main()
{
	printf("�����̰� �� ���� �ö󰡴� ����(A), �̲������� ����(B), �� ����(V)??\n");
	int a, b, v;
	int d; //��ĥ
	scanf("%d %d %d", &a, &b, &v);
	d = (v - b) / (a - b);
	if((v-b) % (a-b) != 0 ) //�� �������� ������
		d = (v - b) / (a - b) + 1;
	printf("�����̰� ������ �� �ɸ��� ��¥ : %d\n", d);
	return 0;
}