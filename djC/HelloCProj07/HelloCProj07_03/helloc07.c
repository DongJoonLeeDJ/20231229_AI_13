//문자의 출력과 입력

#include<stdio.h>
int main()
{
	char c; //문자 저장하는 변수
	//java나 c#의 char는 한글 한 글자도 저장 가능
	//c에서는 안 됨
	char c1 = 'A'; //알파벳(대소문자)이나 숫자나 특수문자만 가능
	printf("글자 하나만 입력하세요.\n");
	c = getchar(); //getchar() 혹은 scanf로 입력 가능함
	printf("입력한 글자 : %c\n", c);
	//중요한 주의사항!!!!!!!!
	//글자를 입력받기 전에 정수나 실수나 혹은 문자나 문자열을 입력받게 되면
	//rewind(stdin)이라는 코드나 while(getchar() != '\n'); 이런 코드를 써야 함
	printf("c1은?\n");
	//이 부분에 뭔가를 처리해야 함
	rewind(stdin); //버퍼에 있는 입력 위치를 처음으로 리셋함
	//쉽게 얘기하면 버퍼 안에 있는 \n을 정리한다고 보면 됨
	//따라서 다시 새로 입력하는 게 가능함

	scanf("%c", &c1); //rewind같은 처리가 필요한 이유... 
	printf("c1 : %c입니다.\n", c1);
	return 0;
}