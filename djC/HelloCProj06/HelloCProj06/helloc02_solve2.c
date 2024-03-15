#include<stdio.h>
int main()
{
	/*
	 a = 5*10; // 여러 줄 주석일 경우 주석 안에 별이 있으면
				//주의 해줄 필요가 있다.
	*/

	//5. 입력한 수에 따라서 아래와 같은 출력이 나오게 할 것
	//(3)
	//	*
	//	**
	//	*** 
	//	(5)
	//	*
	//	**
	//	***
	//	****
	//	*****
	printf("5. 몇 층인가요?\n");
	int f; //floor의 약자
	scanf("%d", &f);
	for (int i = 0; i < f; i++)
	{
		for (int j = -1; j < i; j++)
			printf("*");
		printf("\n");
	}

	for (int i = 1; i <= f; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}

	//6. 역삼각형
	for (int i = 1; i <= f; i++)
	{
		//공백은 i가 증가할 수록 감소
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("*"); //i가 증가할 수록 별의 개수 증가
		printf("\n");
	}
	//7. 피라미드
	for (int i = 1; i <= f; i++)
	{
		//공백은 i가 증가할 수록 감소
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i*2-1; j++) //i*2-1 혹은 (i*2)-1
			printf("*"); //2n-1 패턴 = 1 3 5 7 9 
		printf("\n");
	}

	//8. 다이아몬드
	for (int i = 1; i <= f; i++)
	{
		//공백은 i가 증가할 수록 감소
		for (int j = f; j > i; j--)
			printf(" ");
		for (int j = 0; j < i * 2 - 1; j++) //i*2-1 혹은 (i*2)-1
			printf("*"); //2n-1 패턴 = 1 3 5 7 9 
		printf("\n");
	}
	for (int i = 1; i < f; i++) //i<=f -> i<f
	{
		//공백은 갈수록 증가
		for (int j = 0; j <  i; j++)
			printf(" ");
		for (int j = (f-i)*2-1; j > 0; j--)
			printf("*"); //별은 갈수록 감소
		printf("\n");
	}

	return 0;
}