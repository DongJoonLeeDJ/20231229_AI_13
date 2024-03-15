#include<stdio.h>
//(참고로 띠 순서는 쥐->소->호랑이->토끼->용->뱀->말->양->원숭이->닭->개->돼지)
int main()
{
	printf("태어난 연도?\n");
	int byear;
	scanf("%d", &byear);
	int gabja = byear % 10;
	int thee = byear % 12;

	if (gabja == 9)
		printf("기");
	else if (gabja == 0)
		printf("경");
	else if (gabja == 1)
		printf("신");
	else if (gabja == 2)
		printf("임");
	else if (gabja == 3)
		printf("계");
	else if (gabja == 4)
		printf("갑");
	else if (gabja == 5)
		printf("을");
	else if (gabja == 6)
		printf("병");
	else if (gabja == 7)
		printf("정");
	else if (gabja == 8)
		printf("무");
	else
		printf("!!!");


	if (thee == 9)
		printf("사\n");
	else if (thee == 10)
		printf("오\n");
	else if (thee == 11)
		printf("미\n");
	else if (thee == 0)
		printf("신\n");
	else if (thee == 1)
		printf("유\n");
	else if (thee == 2)
		printf("술\n");
	else if (thee == 3)
		printf("해\n");
	else if (thee == 4)
		printf("자\n");
	else if (thee == 5)
		printf("축\n");
	else if (thee == 6)
		printf("인\n");
	else if (thee == 7)
		printf("묘\n");
	else if (thee == 8)
		printf("진\n");
	else
		printf("???\n");







	switch (gabja)
	{
	case 9:
		printf("기");
		break;
	case 0:
		printf("경");
		break;
	case 1:
		printf("신");
		break;
	case 2:
		printf("임");
		break;
	case 3:
		printf("계");
		break;
	case 4:
		printf("갑");
		break;
	case 5:
		printf("을");
		break;
	case 6:
		printf("병");
		break;
	case 7:
		printf("정");
		break;
	case 8:
		printf("무");
		break;
	default:
		printf("!!!\n");
		break;
	}



	switch (thee)
	{
	case 0:
		printf("신\n");

		break;
	case 1:
		printf("유\n");

		break;
	case 2:
		printf("술\n");

		break;
	case 3:
		printf("해\n");

		break;
	case 4:
		printf("자\n");

		break;
	case 5:
		printf("축\n");

		break;
	case 6:
		printf("인\n");

		break;
	case 7:
		printf("묘\n");

		break;
	case 8:
		printf("진\n");

		break;
	case 9:
		printf("사\n");

		break;
	case 10:
		printf("오\n");

		break;
	case 11:
		printf("미\n");

		break;
	default:
		printf("???\n");

		break;
	}
	return 0;
}