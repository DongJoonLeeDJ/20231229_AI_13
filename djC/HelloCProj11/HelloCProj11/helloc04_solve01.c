#include<stdio.h>
//함수의 기능 말고 정의만 위에다 적고
int calcMyAge(int now, int birth);
void printMyAge(int, int);
int calcDjAge();
void printDjAge();
int main()
{
	printf("나이 : %d살\n", calcMyAge(2024, 1989));
	printMyAge(2024, 1989);
	printf("이동준 나이 : %d\n", calcDjAge());
	printDjAge();

	return 0;
}
//밑에다가 실제 기능을 적어서 정의할 수 있다.
int calcMyAge(int now, int birth)
{
	if (birth > now) //서로 값 바꿈
	{
		int temp = now;
		now = birth;
		birth = now;
	}
	return now - birth;
}
void printMyAge(int now, int birth)
{
	if (now - birth < 0)
		printf("매개변수가 잘못됐습니다\n");
	else
		printf("나이 : %d\n", now - birth);
}
int calcDjAge()
{
	return 2024 - 1989;
}
void printDjAge()
{
	printf("이동준 나이 : %d살\n", 2024 - 1989);
}