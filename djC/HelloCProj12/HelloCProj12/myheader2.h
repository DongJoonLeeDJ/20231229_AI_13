#pragma once
#include<stdio.h>
//전역변수이긴 한 데 하나는 static이 붙음...
//static이 있으면 다른 파일에서는 접근 불가능
//static이 없으면 다른 파일에서도 접근 가능
//초기화는 여기서 하면 안 됨(경우에 따라서 초기화가 되기도 함)
int a; //다른 파일에서도 접근이 가능함
static int b; //다른 파일에서는 접근할 수 없음(예:helloc07_userHeaderFile.c에서는 접근 불가)
void printNum(int);
void printArr(int[], int);
void printAndIncrease();