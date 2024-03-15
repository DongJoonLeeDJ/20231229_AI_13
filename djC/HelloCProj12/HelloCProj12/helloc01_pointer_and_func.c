//함수의 매개변수로 포인터가 올 수 있다.
//함수에 들어오는 매개변수는 main의 변수와 서로 다른 존재
//ex. 대구의 이동준과 서울의 이동준은 다르다.
//함수의 매개변수로 포인터가 온다면?
//ex. 대구의 경북산업직업전문학교 603호에서 이동준! 이렇게 부르는 거랑
//서울에서 "지금 대구의 경북산업직업전문학교 603호에서 이동준!" 이렇게
//부르는 거는 똑같은 거다!
#include<stdio.h>
void plus(int b)
{
	b++;
}
void increase(int* b)
{
	(*b)++;
}
int main()
{
	int n = 10;
	plus(n);
	printf("%d\n", n);
	increase(&n);
	printf("%d\n", n);
	int* pn = &n;
	increase(pn);
	printf("%d\n", n);
	return 0;
}