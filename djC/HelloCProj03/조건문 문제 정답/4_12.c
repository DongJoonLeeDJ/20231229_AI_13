//4-12. �ڽ��� ���� �̸� ù ���ڸ� �Է��ϰ� ����ϵ�, �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� �ٲ㼭 ����� ��(hint : ASCII, a=97, A=65��� ����� ����� ��)
#include<stdio.h>
int main()
{
	//printf("4-12. �ڽ��� ���� �̸� ù ���� �Է�\n");
	//char ch;
	//scanf("%c", &ch);
	printf("4-12. �ڽ��� ���� �̸� ù ���� �Է�\n");
	char ch = getchar();
	printf("ch=%c\n", ch);
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + ('a' - 'A');
	else if (ch >= 'a' && ch <= 'z')
		ch = ch - ('a' - 'A');
	//else //�� �ڵ� ������ �뵵 : ���ĺ� �� �Է� �� ���� ó��
	//	ch = '!';
	printf("ch=%c\n", ch);

	
	return 0;
}