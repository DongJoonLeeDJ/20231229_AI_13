#pragma once
#include<stdio.h>
//���������̱� �� �� �ϳ��� static�� ����...
//static�� ������ �ٸ� ���Ͽ����� ���� �Ұ���
//static�� ������ �ٸ� ���Ͽ����� ���� ����
//�ʱ�ȭ�� ���⼭ �ϸ� �� ��(��쿡 ���� �ʱ�ȭ�� �Ǳ⵵ ��)
int a; //�ٸ� ���Ͽ����� ������ ������
static int b; //�ٸ� ���Ͽ����� ������ �� ����(��:helloc07_userHeaderFile.c������ ���� �Ұ�)
void printNum(int);
void printArr(int[], int);
void printAndIncrease();