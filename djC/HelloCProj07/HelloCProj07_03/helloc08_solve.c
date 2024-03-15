#include<stdio.h>
int main()
{
	//1. 옆 사람의 이름과 취미와 특기를 작성하여 출력하시오.
	printf("이동준, 독서, 코딩가르치기\n");
	//2. 옆 사람의 나이(정수)와 키(실수)와 혈액형 rh가 +인지 -인지(문자) 출력하시오.
	//%d %f %c 이용하기
	printf("나이:%d, 키:%f, 혈액형 : RH%c\n",35,173.4,'+');
	/*3. int, double, char 변수 선언하여
		옆 사람의 나이, 키, 혈액형 rh의 부호(+나 - ) 대입 후
		출력하시오.*/
	int age = 35;
	age = 36;
	double cm = 173.45;
	//double cm = 175.645;
	cm = 173.15;
	char bTypeRH;
	bTypeRH = '-';//대입
	//char bTypeRH = '-';
	printf("나이:%d, 키:%f, 혈액형 : RH%c\n", age, cm, bTypeRH);

	//4. 3번 문제를 하되, 입력받아서 할 것
	//	단 문자를 가장 먼저 입력받거나
	//	rewind(stdin)을 사용할 것
	printf("나이는?\n");
	scanf("%d", &age);
	printf("키는?\n");
	scanf("%lf", &cm);
	printf("RH +? -?\n");
	rewind(stdin);
	//bTypeRH = getchar();
	//while (getchar() != '\n'); //C 권장 표준
	scanf("%c", &bTypeRH);
	printf("%d %lf %c\n", age, cm, bTypeRH);
	return 0;
}