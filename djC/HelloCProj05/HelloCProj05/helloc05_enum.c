#include<stdio.h>
//enumeration = ������
enum MONTH
{
	JAN=1,FEB=2,MAR=3,APR=4,MAY=5,JUNE=6,JULY=7,AUG=8,SEP=9,OCT=10,NOV=11,DEC=12
};
int main()
{
	int month = APR; //�̵����� �¾ �� 4��
	switch (month)
	{
	case DEC:
	case JAN:
	case FEB:
		printf("�ܿ�\n");
		break;
	case MAR:
	case APR:
	case MAY:
		printf("��\n");
		break;
	case JUNE:
	case JULY:
	case AUG:
		printf("����\n");
		break;
	case SEP:
	case OCT:
	case NOV:
		printf("����\n");
		break;
	default:
		break;
	}

	return 0;
}