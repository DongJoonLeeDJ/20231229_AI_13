#include<stdio.h>
int main()
{
	int num;
	while (0) //while(1) = 무한반복, while(0) = 한 번도 실행 안 함
	{
		printf("정수 입력\n");
		scanf("%d", &num);
		if (num < 0)
			break;
		if (num == 0)
			continue;//for뿐아니고 while에서도 사용됨
		printf("%d의 제곱 : %d\n", num, num * num);
	}
	//2. A부터 Z, 그리고 a부터 z를 출력하시오.
	for (char i = 'A'; i <= 'z'; i++)
	{
		if (i > 'Z' && i < 'a') //91~96까지는 제외!
			continue;

		printf("%c ", i);
	}
	//continue 없이 하는 법
	printf("\n");
	for (char i = 'A'; i <= 'z'; i++)
	{
		if( (i>='A'&&i<='Z') || (i >= 'a' && i <= 'z'))
			printf("%c ", i);
	}
	//3. 1부터 10까지의 곱을 출력하시오.
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	printf("1부터 10까지의 곱 : %d\n", sum);

	//4. 1x2x3x4x5x6x7x8x9x10=3628800
	printf("1");
	for (int i = 2; i <= 10; i++)
		printf("x%d", i);
	printf("=%d\n", sum);

	
	if (0)
	{
		//5. 달팽이 문제
		//A B V를 입력받아야 함
		//A : 하루에 올라가는 높이, B: 하루에 내려가는 높이, V:총 높이
		//ex) 2 1 5 -> 4, 5 1 6 -> 2, 100 99 1000000000 => 999999901
		printf("A B V 입력\n");
		int a, b, v;
		int day = 0, distance = 0;
		scanf("%d %d %d", &a, &b, &v);
		while (1)
		{
			day++; //하루가 지남
			distance += a; //a만큼 올라감
			if (distance >= v)
				break; //목표 높이까지 올라갔으면 종료
			distance -= b; //밤이 되어 미끄러져 내려감
		}
		printf("총 소요 일 : %d\n", day);
	}

	//6. 구구단 출력 코드
	//중첩 반복문 가장 기본적인 예제

	//for문으로 하는 방법
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			printf("%d x %d = %d\n", i, j, i * j);
	}
	//while문으로 하는 방법
	int i = 2;
	while (i < 10)
	{
		int j = 1;
		while (j < 10)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	//7. 입력에 따른 출력
	printf("\n층 수를 입력하세요\n");
	int floor;
	scanf("%d", &floor);
	for (int i = 0; i < 2 * floor; i++)
	{
		int onOffSwitch = i; //공백이랑 별 출력 관련 변수(flag 변수)
		for (int j = 0; j < floor; j++)
		{
			if (onOffSwitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onOffSwitch++;
		}
		printf("\n");
	}

	return 0;
}