#include<stdio.h>
int main()
{
	char test[1024];
	printf("문장을 입력하세요\n");
	gets(test);
	//1. byte수 출력
	//while문을 이용해도 되고 for문을 이용해도 됨
	//1. 단순 바이트 계산
	//int mybyte = 0;
	//while (test[mybyte] != NULL)
	//	mybyte++;
	//printf("바이트 수 : %d\n", mybyte);
	//1-2. for 이용
	int bytecount = 0;
	//for (bytecount = 0; test[bytecount] != NULL; bytecount++){}
	for (bytecount = 0; test[bytecount] != NULL; bytecount++);
	printf("1. 바이트 크기 : %d byte\n", bytecount);
	int count = 0; //글자수
	for (int i = 0; test[i] != NULL; i++)
	{
		if (test[i] >= 0 && test[i] <= 127)
			count++;
		else //ASCII에서 벗어난 경우
		{
			i++; //인덱스를 하나 더 증가시킴
			count++;//그리고 나서 글자수를 하나 증가시킴
		}
	}
	printf("2. 글자 수 :%d개\n", count);


	return 0;
}