#include<stdio.h>
int main()
{
	int xx = 0;//1 0 -1
	int yy = 0;//1 0 -1

	int a = xx == 0;
	switch (a)
	{
	case 1:
		printf("0\n");
		break;
	default:
		switch (a>0)
		{
		case 0://음수
			break;
		case 1://양수
			break;
		default:
			break;
		}
		break;
	}


	char ch;
#pragma region question

	if (0) //이 안에 있는 것들은 절대 실행 안 되는 코드
		//0 = 거짓을 의미하니까....
	{
		//4-1. 태어난 연도를 입력한다. 연도가 짝수일 경우 건강검진의 해, 그렇지 않을 경우 건강검진의 해 아님 출력
		int y;
		printf("4-1, 4-2. 태어난 연도 입력\n");
		scanf("%d", &y);
		if (y % 2 == 0)
			printf("건강검진의 해\n");
		else
			printf("건강검진의 해 아님\n");

		//4-2. 1번과 동일하되 태어난 연도를 0이라고 한 경우에 대한 예외도 추가한다.
		if (y % 2 == 0)
		{
			if (y == 0)
				printf("태어난 연도 : 0\n");
			else
				printf("건강검진의 해\n");
		}
		else
			printf("건강검진의 해 아님\n");
		//4-3. char ch 라는 변수와 정수 변수 선언 후, 정수 값을 짝수 입력하면 ch에 2, 홀수 입력하면 ch에 1, 0일 경우에는 0을 입력 후 그 값을 출력한다.
		int num;
		printf("4-3. 정수 입력\n");
		scanf("%d", &num);
		if (num == 0)
			ch = '0';
		else if (num % 2 == 1) //홀수
			//else if (num%2!=0) //같은 코드임(홀수체크)
			ch = '1';
		else
			ch = '2'; //이 경우엔 else 필요!
		//왜냐면 else가 없으면 ch 값이 할당되지 않으므로
		//ch를 출력할 수 없기 때문이다!!!
		printf("ch=%c\n", ch);

		//참고
		//if else if else와 if if else의 차이점
		//위의 코드는 ch가 0,1,2 중 하나의 값을 가짐
		//아래 코드는 num이 0일 경우에도 밑의 else 때문에 ch가 2가 됨!
		if (num == 0)
			ch = '0';
		if (num % 2 == 1)
			ch = '1';
		else
			ch = '2';
		printf("(참고)ch=%c\n", ch);

		//4-4. 두 개의 정수를 입력한다. 두 번째 값이 더 클 경우에는 두번째-첫번째 출력,
		//첫번째 값이 크거나 같은 경우엔 첫번째 - 두번째 출력
		int num1, num2; //옛날 C는 변수를 무조건 미리 다 선언해야 했음(리눅스)
		printf("4-4. 두 개의 정수를 입력한다.(ex)3,5 ");
		//입력시 콤마 꼭 필요
		//ex. 10,5
		//scanf("%d\n",&num1); 이런식으로 쓰지 말 것
		//이렇게 쓸 경우 엔터 두 번 쳐야 함...
		scanf("%d,%d", &num1, &num2);
		if (num2 > num1)
			printf("%d\n", num2 - num1);
		else
			printf("%d\n", num1 - num2);
		int sec;
		printf("4-5. 초 입력\n");
		scanf("%d", &sec);
		if (sec >= 3600 || sec < 0)
			printf("허용 sec 값 초과\n");
		else
		{
			printf("%d분 %d초\n", sec / 60, sec % 60);
		}

		//참고
		if (sec >= 3600 || sec < 0)
			printf("허용 sec 값 초과\n");
		//else if(sec>=0 && sec<60) //같은 코드
		else if (sec >= 0 && sec <= 59)
			printf("%d초\n", sec);
		else
		{
			printf("%d분 %d초\n", sec / 60, sec % 60);
		}

		int birth, now;
		printf("4-6. 태어난 연도와 현재 연도 입력\n");
		scanf("%d %d", &birth, &now);
		if (birth > now)
			printf("잘못된 값 입력!!\n");
		else
			printf("나이 : %d살\n", now - birth);

		int age;
		double h;
		printf("4-7. 나이와 키 입력\n");
		scanf("%d %lf", &age, &h);
		if (age < 0 || h < 0)
			printf("잘못된 입력!!\n");
		else
		{
			printf("나이:%d살, 키:%f\n", age, h);
			printf("나이:%d살, 키:%lf\n", age, h);
			printf("나이:%d살, 키:%.1lf\n", age, h);
		}

		int n1, n2;
		printf("4-8. 첫 번째 정수 입력\n");
		scanf("%d", &n1);
		if (!(n1 < 100 || n1>999))
		{
			printf("두 번째 정수 입력\n");
			scanf("%d", &n2);
			if (n2 >= 100 && n2 <= 999)
			{
				printf("%d %d %d %d\n",
					n1 * (n2 % 10), n1 * ((n2 / 10) % 10), n1 * (n2 / 100), n1 * n2);
			}
			else
			{
				printf("잘못된 입력\n");
			}

		}
		else
			printf("잘못된 입력\n");
		int aa, bb, cc, dd, ee, ff;
		printf("4-9. 5 4 6 2 3 1 중 하나를 입력해주세요. ");
		scanf("%d", &aa);
		if (aa < 1 || aa>6)
		{
			printf("잘못된 입력\n");
		}
		else
		{
			bb = (aa * 5) % 7;
			cc = (bb * 5) % 7;
			dd = (cc * 5) % 7;
			ee = (dd * 5) % 7;
			ff = (ee * 5) % 7;
			printf("%d %d %d %d %d %d\n", aa, bb, cc, dd, ee, ff);
		}

		printf("4-10. 4-9의 조건문 버전, 정수 하나 입력\n");
		scanf("%d", &num); //위에서 선언한 변수 재활용
		if (num == 1)
			printf("1 5 4 6 2 3\n");
		else if (num == 2)
			printf("2 3 1 5 4 6\n");
		else if (num == 3)
			printf("3 1 5 4 6 2\n");
		else if (num == 4)
			printf("4 6 2 3 1 5\n");
		else if (num == 5)
			printf("5 4 6 2 3 1\n");
		else if (num == 6)
			printf("6 2 3 1 5 4\n");
		else
			printf("잘못된 입력\n");
		printf("4-11. 두 수 입력\n");
		scanf("%d %d", &num1, &num2);

		int solve = num1 - num2;
		if (solve < 0)
			solve *= -1; //solve = solve * -1;
		printf("두 값의 차이 : %d\n", solve);
		printf("4-12. 자신의 영어 이름 첫 글자 입력\n");
		//char ch; //위에서 선언한 변수 활용
	}

#pragma endregion
	if (0)
	{

	rewind(stdin); //버퍼의 \n 정리
	scanf("%c", &ch);
	//printf("4-12. 자신의 영어 이름 첫 글자 입력\n");
	//char ch = getchar();
	printf("ch=%c\n", ch);
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + ('a' - 'A');
	else if (ch >= 'a' && ch <= 'z')
		ch = ch - ('a' - 'A');
	//else //이 코드 유무와 용도 : 알파벳 외 입력 시 예외 처리
	//	ch = '!';

	printf("ch=%c\n", ch);
	}

	return 0;
}