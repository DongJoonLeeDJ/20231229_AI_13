//5. 내가 태어난 월을 입력하고, 그 달의 계절을 출력하세요.
//12, 1, 2는 겨울이며 3, 4, 5는 봄, 6, 7, 8은 여름, 9, 10, 11은 가을이며 그 외의 값에 대해선 예외처리하기
#include<stdio.h>
int main()
{
	int month;
	printf("5. 태어난 월 입력\n");
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		printf("겨울\n");
	else if (month >= 3 && month <= 5)
		printf("봄\n");
	else if (month > 5 && month < 9)
		printf("여름\n");
	else if (month >= 9 && month <= 11)
		printf("가을\n");
	else
		printf("%d월은 없습니다.\n", month);
	return 0;
}