//array = 배열
//배열 = 포인터
//여러 칸짜리 메모리의 시작 위치를 저장함
#include<stdio.h>
int main()
{
	//a나 b 모두 10칸짜리 메모리의 시작 위치를 갖고 있음
	int a[10];
	int b[] = { 10,20,30,40,50,60,70,80,90,100 };
	int* pa = a;
	int* pb = b;
	printf("%p %p\n", a, pa);//메모리 주소 형식의 값이 출력됨

	//a나 b 둘 다 한 개의 변수를 이용해서 10개의 값을 관리하고 있음.
	//이 메모리에 있는 값을 순차적으로 출력하는 코드는 주로 반복문을 활용함
	for (int i = 0; i < 10; i++)
		printf("%d ", b[i]); //값 출력
	//b[0], b[1] ... 이렇게 대괄호 안에 있는 수를 인덱스(index)라고 말하고
	//가장 첫번째 값을 [0]번째라고 표기함. 가장 끝의 값은 길이가 10이므로 [9]
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		a[i] = i * 10;//값 할당
		printf("a[%d] = %d\n", i, a[i]); //값 출력
	}
	//배열 안에 값을 scanf로 넣는 방법은?
	printf("a의 첫번째(0번째) 값 입력하세요!\n");
	scanf("%d", &a[0]);
	
	//여섯 번째 값 바꾸기
	//scanf("%d", pa+5);
	scanf("%d", &a[5]);
	for (int i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]); //값 출력
	}

	//여러 개 한 번에 입력
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]); //값 출력
	}
	return 0;
}