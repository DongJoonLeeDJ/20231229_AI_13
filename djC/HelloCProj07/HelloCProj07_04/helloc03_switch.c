#include<stdio.h>
int main()
{
	//switch = ����� ���� ���� �� �� �� ���� ����
	//��� if��ó�� ���� ������ ǥ���ϴ� ���� �Ұ�����
	//3.1 �̻� 3.2 ���� -> if�����δ� ǥ���� ������
	//switch���� ����� ���� �����ϴ� ����̶� ǥ���� �Ұ���

	printf("���� �Է�\n");
	int num;
	scanf("%d", &num);
	switch (num)
	{
		case 0:
			printf("����!\n");
			break; //break�� ������ �ٷ� ��������
		case 1:
			printf("����!\n");
			break;
		case 2:
			printf("��!\n");
			break;
		default: //else�� ���� ��
			printf("��Ÿ ���\n");
			break;
	}

	printf("�ֻ��� �� ������\n");
	int dice;
	scanf("%d", &dice);
	//Ȧ���� ¦���Ŀ� ���� �ٸ��� �ϰ� �ʹٸ�...
	switch (dice)
	{
		//dice ���� 1�̰ų� 3�̰ų� 5�� ��쿡 �Ʒ��� ���� ����� ��
	case 1:
	case 3:
	case 5:
		printf("�� ���� Ȧ���Դϴ�!\n");
		break; //break �����ϰ� �Ǹ� �Ʒ��� �ڵ�鵵 �� ������ ��
		//dice ���� 2�̰ų� 4�̰ų� 6�� ��쿡 �Ʒ��� ���� ����� ��
	case 2:
	case 4:
	case 6:
		printf("�� ���� ¦���Դϴ�!\n");
		break;
	default:
		printf("�߸��� ��!\n");
		break;
	}


	return 0;
}