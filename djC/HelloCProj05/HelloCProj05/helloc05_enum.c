#include<stdio.h>
//enumeration = 열거형
enum MONTH
{
	JAN=1,FEB=2,MAR=3,APR=4,MAY=5,JUNE=6,JULY=7,AUG=8,SEP=9,OCT=10,NOV=11,DEC=12
};
int main()
{
	int month = APR; //이동준의 태어난 달 4월
	switch (month)
	{
	case DEC:
	case JAN:
	case FEB:
		printf("겨울\n");
		break;
	case MAR:
	case APR:
	case MAY:
		printf("봄\n");
		break;
	case JUNE:
	case JULY:
	case AUG:
		printf("여름\n");
		break;
	case SEP:
	case OCT:
	case NOV:
		printf("가을\n");
		break;
	default:
		break;
	}

	return 0;
}