#include<stdio.h>
int main()
{
	//4-4. 두 개의 정수를 입력한다. 두 번째 값이 더 클 경우에는 두번째-첫번째 출력,
	//첫번째 값이 크거나 같은 경우엔 첫번째 - 두번째 출력
	int num1, num2; //옛날 C는 변수를 무조건 미리 다 선언해야 했음(리눅스)
	printf("4-4. 두 개의 정수를 입력한다.(ex)3,5");
	//입력시 콤마 꼭 필요
	//ex. 10,5
	//scanf("%d\n",&num1); 이런식으로 쓰지 말 것
	//이렇게 쓸 경우 엔터 두 번 쳐야 함...
	scanf("%d,%d", &num1, &num2);
	if (num2 > num1)
		printf("%d\n", num2 - num1);
	else
		printf("%d\n", num1 - num2);

	

	return 0;
}