#include<stdio.h>
int main()
{
	int a, b;
	printf("두 정수 입력");
	scanf("%d %d", &a, &b);
	printf("%d %d %d %d\n",
		a*(b%10), a*((b/10)%10), a*(b/100),a*b );

	int aa, bb, cc, dd, ee, ff;
	printf("5 4 6 2 3 1 중 하나를 입력해주세요. ");
	scanf("%d", &aa);
	bb = (aa * 5) % 7;
	cc = (bb * 5) % 7;
	dd = (cc * 5) % 7;
	ee = (dd * 5) % 7;
	ff = (ee * 5) % 7;
	printf("%d %d %d %d %d %d", aa, bb, cc, dd, ee, ff);

	printf("안녕하세요");
	printf("\"안녕하세요\"");
	printf("%d",1+9);
	printf("1+9의합은 %d입니다",1+9);
	printf("제혈액형은 RH%c입니다", '+');
	printf("저의 이메일은 %s@%s입니다","abcd","defg.com");
	printf("저의시력은 %f %f 입니다", 0.3, 0.5);

	return 0;
}