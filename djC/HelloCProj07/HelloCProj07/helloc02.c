#include<stdio.h>
int main()
{
	//정수와 실수 연산 구분해보기
	//%d : 정수
	//%f 혹은 %lf는 실수
	printf("%d\n", 10 - 3); //빼기 //ctrl + d 누르면 줄복사
	printf("%d\n", 10 * 3); //곱
	printf("%d\n", 10 / 3); //몫
	printf("%d\n", 10 % 3); //나머지
	printf("%f\n", 10.0 / 3); //소수점 포함한 결과 출력
	printf("%.1f\n", 10.0 / 3); //소수점 1번째 자리, 반올림
	return 0;
}