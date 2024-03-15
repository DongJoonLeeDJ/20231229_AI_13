/*
4-9. 아래 문제를 풀되, 1~6까지의 값이 아닌 값을 입력할 경우 잘못됐다는 메시지를 출력하시오.
"5 4 6 2 3 1"
5 4 6 2 3 1 5 4 6 2 3 1 5 ...
입력과 출력 예시
입력 : 4
출력[4 6 2 3 1 5]
입력 : 5
출력[5 4 6 2 3 1]

*/

#include<stdio.h>
int main()
{
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
	return 0;
}