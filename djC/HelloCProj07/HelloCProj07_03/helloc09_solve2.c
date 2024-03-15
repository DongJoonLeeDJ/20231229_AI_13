#include<stdio.h>
int main()
{
	//이제부턴 정수나 실수를 입력받으므로
	//rewind 코드는 쓸 필요없음
	int w, h, z;//사각형과 직육면체용 변수
	const double PI = 3.14; //가독성용 상수
	int r; //반지름
	printf("5. w와 h 입력\n");
	scanf("%d %d", &w, &h);
	printf("사각형의 넓이 : %d\n", w * h);

	printf("6. w,h,z 입력\n");
	scanf("%d,%d,%d", &w, &h, &z);
	printf("직육면체 부피 : %d\n", w * h * z);

	printf("7. 반지름(r) 입력\n");
	scanf("%d", &r);
	printf("구의 부피 : %lf\n",(4.0/3)*PI*(r*r*r));

	return 0;
}