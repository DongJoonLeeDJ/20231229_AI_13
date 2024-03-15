//8. 공유 폴더의 ppt
#include<stdio.h>
int main()
{
	printf("8-1. 두 개의 수 입력받음\n");
	int x, y;
	scanf("%d %d", &x, &y);
	if (x == 0 || y == 0)
		printf("0\n");
	else
	{
		if (x > 0 && y > 0)
			printf("1\n");
		else if (x < 0 && y>0)
			printf("2\n");
		else if (x < 0 && y < 0)
			printf("3\n");
		else
			printf("4\n");
	}
	printf("8-2. 나이 입력\n");
	int age;
	scanf("%d", &age);
	if (age >= 0 && age < 20)
		printf("미성년자\n");
	else if (age >= 20 && age <= 50)
		printf("사회의 주 구성원\n");
	else if (age > 50 && age < 71) //51~70
		printf("관리자\n");
	else if (age >= 71 && age <= 200)
		printf("지혜의 도서관\n");
	else
		printf("타노스\n");
	
	printf("8-3. 사전 평가 문제(H,M 입력)\n");
	int h, m;
	scanf("%d %d", &h, &m);
	if (h >= 0 && h < 24 && m >= 0 && m < 60)
	{
		printf("입력한 시간 : %d시 %d분\n", h, m);
		m -= 45; //m = m-45;
		if (m < 0) //8시 15분에서 45분 빼면 7시 30분이다.
		{
			m += 60; //m=m+60;
			h -= 1; // h = h-1;
			if (h < 0)
			{
				printf("전날 알람...\n");
				h += 24; //h=h+24;
			}
		}
		printf("최종 알람 시간 : %d시 %d분\n", h, m);

	}
	else
	{
		printf("잘못된 입력: h=%d, m=%d\n", h, m);
	}


	return 0;
}