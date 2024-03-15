#include<stdio.h>
int main()
{
	printf("문장을 입력하시오\n");
	char test[100];
	gets(test);
	//입력받은 문자열을 한 글자씩 읽어들이는 작업을 해야 한다.
	//반복문을 써야 함
	//for문이 제일 사용하기가 쉬울 것
	//조건부 부분이 좀 달라져야 하는 데, 
	//문장의 맨 끝이 NULL(='\0' 혹은 0)이라는 걸 이용하면 됨

	//for (int i = 0; test[i] != NULL; i++)
	//for (int i = 0; test[i] != 0; i++)
	printf("%s\n", test);
	for (int i = 0; test[i] != '\0'; i++)
	{
		if (test[i] >= 'A' && test[i] <= 'Z')
			test[i] += ('a' - 'A'); //ASCII 코드 표 참고!
		else if (test[i] >= 'a' && test[i] <= 'z')//그냥 if쓰면 안 됨!!!
			test[i] -= ('a' - 'A');
		else if (test[i] == ' ') //공백만 그냥 넘어가게 하고 싶다면 추가!
			continue;
		else
		{
			printf("%c는 알파벳이 아닙니다.\n", test[i]);
		}
		//공백이나 이상한 문자들은 아무런 처리를 하지 않음
		//사실 예외가 필요없다.
		//굳이 예외가 필요하다면 else문을 추가해주면 된다.
	}
	printf("%s\n", test);
	return 0;
}