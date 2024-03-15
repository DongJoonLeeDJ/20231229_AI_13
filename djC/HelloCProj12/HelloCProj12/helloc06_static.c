#include<stdio.h>
static int aa = 0; //전역변수에 static 붙으면
//다른 c 파일에서 접근이 안 됨

void testStaticVar(int c) //매개변수 역시 testStaticVar가 끝나면 사라지고
{						  //main의 변수랑은 별개의 존재
	int a = 0; //a는 testStaticVar가 끝나면 사라짐
	static int b = 0; //b는 testStaticVar가 끝나도 프로그램 종료시까지 사라지지 않음
	a++;
	b++;
	c++;
	aa++;
	printf("%d %d %d %d\n", a, b, c, aa);

	//static 키워드가 붙은 변수 혹은 전역변수는 data영역에 속하고
	//data 영역에 있는 변수는 프로그램이 끝나야지만 사라진다.
	
	//참고로 스택 등보다 메모리에 올라오는 순서도 더 빠름
}
//그렇다면...!!! 만약에... 전역 변수에 static이 붙는다면?
//static이 붙지 않은 전역변수와 static이 붙은 전역 변수의 차이는 뭘까요??

int main()
{
	int c = 0;
	testStaticVar(c);
	testStaticVar(c);
	testStaticVar(c);
	return 0;
}