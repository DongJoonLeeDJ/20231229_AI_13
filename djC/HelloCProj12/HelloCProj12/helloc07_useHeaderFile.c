#include"myheader.h"
//#include"myheader.h"
//#include"myheader.h"
//#include"myheader.h"
//#include<stdio.h> //#prgma once 덕분에 stdio.h가
//또 있어도 문제가 되지 않는다.
#include"myheader2.h"

//extern : 외부의
//다른 파일에 있는 변수를 읽어온다는 뜻
extern a;
extern b;
extern c;
extern d;
int main()
{
	//sumAtoB가 이 파일 안에는 없지만
	//myheader.h에 있다.
	//그리고 printf도 myheader.h에서 stdio.h를 참조하고
	//있으므로 사용할 수 있다.
	printf("%d\n", sumAtoB(1, 10));
	printNum(100);
	int nums[] = { 10,2,-4,100,5 };
	printArr(nums, sizeof(nums) / sizeof(int));
	printAndIncrease();
	a++;
	b++; //이 증가를 무시함
	c++;
	//printf("%d\n", d); //출력도 안 됨
	//d++; //실행 자체가 안 됨
	//이유 : static이 붙으면 다른 파일에서 해당 변수에
	//접근이 불가능
	//해당 변수를 조작할 수 있는 것은 
	//그 변수를 선언한 header파일이나
	//그 header파일의 함수를 정의한 c파일에서만 가능함
	printAndIncrease();
	printAndIncrease();
	printAndIncrease();
	return 0;
}