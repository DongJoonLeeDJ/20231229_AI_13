//7. 내 나이와 키를 입력받아서 출력하는 프로그램을 작성하시오.단, 나이 혹은 키가 음수일 경우 잘못됐다는 메시지를 출력하시오.
#include<stdio.h>
int main()
{
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
	return 0;
}