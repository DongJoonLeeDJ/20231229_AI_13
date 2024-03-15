//continue : break랑은 다르게, 반복문을 끝내는 게 아니고!
//해당 순서만 건너뛰는 것
//ex. 1부터 10까지 출력하되, 짝수만 출력하게 한다면
//방법이 2가지가 있다.
//1) if문 이용해서 짝수만 출력하게 하는 방법
//2) if문 이용해서 홀수는 다음 단계로 건너뛰게 하는 방법(continue)
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 != 0)
			continue; //break면 반복문 자체가 그냥 끝나버림
		printf("%d\n", i);
	}

	for (int i = 0; i < 10; i++) //----1
	{
		printf("----\n");
		for (int j = 0; j < 10; j++) //----2
		{
			printf("%d : %d\n", i, j);
			if (j == 5)
				break; //안쪽 반복문을 빠져나간다는 의미(2번 반복문을 빠져나감)
		}
		printf("@@@@\n");
	}

	printf("break ex\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			break;
		printf("%d\n", i);
	}

	printf("continue ex\n");
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			continue;
		printf("%d\n", i);
	}


	return 0;
}