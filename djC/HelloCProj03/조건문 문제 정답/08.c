//8. ���� ������ ppt
#include<stdio.h>
int main()
{
	printf("8-1. �� ���� �� �Է¹���\n");
	int x, y;
	scanf("%d %d", &x, &y);
	if (x == 0 || y == 0)
		printf("0\n");
	else
	{
		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y>0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else
			printf("4\n");
	}
	printf("8-2. ���� �Է�\n");
	int age;
	scanf("%d", &age);
	if (age >= 0 && age < 20)
		printf("�̼�����\n");
	else if (age >= 20 && age <= 50)
		printf("��ȸ�� �� ������\n");
	else if (age > 50 && age < 71) //51~70
		printf("������\n");
	else if (age >= 71 && age <= 200)
		printf("������ ������\n");
	else
		printf("Ÿ�뽺\n");
	
	printf("8-3. ���� �� ����(H,M �Է�)\n");
	int h, m;
	scanf("%d %d", &h, &m);
	if (h >= 0 && h < 24 && m >= 0 && m < 60)
	{
		printf("�Է��� �ð� : %d�� %d��\n", h, m);
		m -= 45; //m = m-45;
		if (m < 0) //8�� 15�п��� 45�� ���� 7�� 30���̴�.
		{
			m += 60; //m=m+60;
			h -= 1; // h = h-1;
			if (h < 0)
			{
				printf("���� �˶�...\n");
				h += 24; //h=h+24;
			}
		}
		printf("���� �˶� �ð� : %d�� %d��\n", h, m);

	}
	else
	{
		printf("�߸��� �Է�: h=%d, m=%d\n", h, m);
	}


	return 0;
}