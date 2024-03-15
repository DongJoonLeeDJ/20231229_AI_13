#include<stdio.h>
int main()
{
	int birth, now;
	//int a, b, c, d, e, f, g; //이건 됨
	//int year, double height; //이건 안 됨
	printf("태어난 연도와 현재 연도 입력");
	scanf("%d %d", &birth, &now);
	int age = now - birth;
	printf("나이 : %d\n", age);

	printf("나이와 키를 입력하세요.");
	double height;
	scanf("%d %lf", &age, &height);
	printf("나이:%d, 키:%lf\n", age, height);

	printf("기분은?");
	//쉽게 설명하면 : 버퍼에 쌓인 엔터키가 삭제됨
	//어렵게(정석대로) 말하자면 : 버퍼의 포인터가 처음으로 이동함
	//이와 비슷한 이슈가 java의 Scanner의 nextLine, nextInt등에서 나타남
	rewind(stdin); //문자열 입력받기 전 rewind 혹은 아래 코드 쓰기
	//while (getchar() != '\n'); //c 표준 문법
	char emo;
	scanf("%c", &emo); //\n(=LF, Line Feed, 엔터키)가 들어가 버림
	//emo = getchar();
	printf("기분은 %c입니다.\n", emo);

	return 0;
}