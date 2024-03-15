#include<stdio.h>
int main()
{
	//switch = 경우의 수가 여러 개 일 때 쓰기 좋음
	//대신 if문처럼 값의 범위를 표현하는 것은 불가능함
	//3.1 이상 3.2 이하 -> if문으로는 표현이 가능함
	//switch문은 경우의 수를 열거하는 방식이라서 표현이 불가능

	printf("정수 입력\n");
	int num;
	scanf("%d", &num);
	switch (num)
	{
		case 0:
			printf("가위!\n");
			break; //break를 만나면 바로 빠져나감
		case 1:
			printf("바위!\n");
			break;
		case 2:
			printf("보!\n");
			break;
		default: //else와 같은 것
			printf("기타 등등\n");
			break;
	}

	printf("주사위 눈 던지기\n");
	int dice;
	scanf("%d", &dice);
	//홀수냐 짝수냐에 따라서 다르게 하고 싶다면...
	switch (dice)
	{
		//dice 값이 1이거나 3이거나 5인 경우에 아래와 같이 출력을 함
	case 1:
	case 3:
	case 5:
		printf("이 눈은 홀수입니다!\n");
		break; //break 누락하게 되면 아래의 코드들도 다 실행을 함
		//dice 값이 2이거나 4이거나 6인 경우에 아래와 같이 출력을 함
	case 2:
	case 4:
	case 6:
		printf("이 눈은 짝수입니다!\n");
		break;
	default:
		printf("잘못된 값!\n");
		break;
	}


	return 0;
}