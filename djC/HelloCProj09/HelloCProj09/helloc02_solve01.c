#include<stdio.h>
int main()
{
	int a, b;
	int* pa;
	int* pb; //a와 b의 주소를 저장할 변수(=포인터)
	pa = &a;
	pb = &b;

	printf("a와 b 입력\n");
	scanf("%d %d", pa, pb); //scanf("%d %d", &a, &b);
	printf("%d %d %d %d\n", a, b, *pa, *pb);

	//포인터 개념은 추후에 함수에서도 응용이 되고
	//배열과 함수의 관계등을 볼 때나 linked list와 같은
	//심화 개념, 자료 구조 개념 공부시 매우 중요한 개념
	return 0;
}