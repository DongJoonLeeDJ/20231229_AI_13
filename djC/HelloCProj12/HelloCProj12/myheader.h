//헤더 파일 안에 함수를 따로 구현할 수 있다.
//이 헤더파일을 불러오면 다른 c 파일에서도
//여기에 적힌 기능을 쓸 수 있다.
 //다른 헤더파일들에도 있음
//헤더파일의 중복 선언을 허용함
#pragma once
#include<stdio.h>
int e = 0;
int sumAtoB(int a, int b)
{
	int sum = 0;
	for (int i = a; i <= b; i++)
		sum += i;
	return sum;
}
//함수든 변수든 선언 및 정의까지 전부 다 해주거나
//아니면 정의만 해야 한다.
