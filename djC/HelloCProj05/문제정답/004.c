#include<stdio.h>
#define ���� 0
#define ���� 1
#define �� 2

int main()
{
	int rcp;
	printf("���� ���� ��!(���� �ƹ��ų�)\n");
	scanf("%d", &rcp);
	if (rcp%3 == ����)
		printf("����\n");
	else if (rcp % 3 == ����)
		printf("����\n");
	else if (rcp % 3 == ��)
		printf("��\n");
	else
		printf("�߸��� ��! %d\n", rcp);

	switch (rcp%3)
	{
	case 0:
		printf("����\n");

		break;
	case 1:
		printf("����\n");

		break;
	case 2:
		printf("��\n");
		break;

	default:
		printf("�߸��� ��! %d\n", rcp);

		break;
	}

	return 0;
}