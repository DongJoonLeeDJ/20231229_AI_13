#include<stdio.h>

//������
enum RCP
{
	 ����,����,��
};

int main()
{
	int rcp;
	printf("���� ���� ��!(0,1,2 �� �ϳ�)\n");
	scanf("%d", &rcp);
	if (rcp == 0)
		printf("����\n");
	else if (rcp == 1)
		printf("����\n");
	else if (rcp == 2)
		printf("��\n");
	else
		printf("�߸��� ��!\n");

	switch (rcp)
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
		printf("�߸��� ��!\n");
		break;
	}

	//����(������ enum �̿��ϴ� ��)
	switch (rcp)
	{
	case ����:
		printf("����\n");
		break;
	case ����:
		printf("����\n");
		break;
	case ��:
		printf("��\n");
		break;

	default:
		printf("�߸��� ��!\n");
		break;
	}


	return 0;
}