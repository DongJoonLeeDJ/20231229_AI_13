#include<stdio.h>
int main()
{
	//두 개의 char 배열을 선언해야 하고, 그 것들을 전부 NULL로 초기화
	char sentense1[1024] = { NULL };
	char sentense2[1024] = { NULL };
	printf("원본 문자열 입력\n");
	gets(sentense1);
	int count = 0; //글자수를 셀 변수를 선언
	for (count = 0; sentense1[count] != NULL; count++); //abcd 입력시 count=4
	int i = 0; //앞쪽부터 읽을 변수
	int len = count - 1; //뒤쪽부터 읽을 변수
	for (i = 0; sentense1[i] != NULL; i++, len--) //i++, len--
	{
		if (sentense1[i] >= 0 && sentense1[i] <= 127) //아스키코드에 포함된 경우
			sentense2[len] = sentense1[i];
		else
		{
			if (len <= 0)
				break; //이런 경우는 없음
			sentense2[len - 1] = sentense1[i];
			sentense2[len] = sentense1[i+1];
			i++;
			len--;
		}
	}
	printf("%s %s\n", sentense1, sentense2);


	return 0;
}