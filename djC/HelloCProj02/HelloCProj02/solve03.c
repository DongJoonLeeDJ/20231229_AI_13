#include<stdio.h>
int main()
{
	int a, b;
	printf("�� ���� �Է�");
	scanf("%d %d", &a, &b);
	printf("%d %d %d %d\n",
		a*(b%10), a*((b/10)%10), a*(b/100),a*b );

	int aa, bb, cc, dd, ee, ff;
	printf("5 4 6 2 3 1 �� �ϳ��� �Է����ּ���. ");
	scanf("%d", &aa);
	bb = (aa * 5) % 7;
	cc = (bb * 5) % 7;
	dd = (cc * 5) % 7;
	ee = (dd * 5) % 7;
	ff = (ee * 5) % 7;
	printf("%d %d %d %d %d %d", aa, bb, cc, dd, ee, ff);

	printf("�ȳ��ϼ���");
	printf("\"�ȳ��ϼ���\"");
	printf("%d",1+9);
	printf("1+9������ %d�Դϴ�",1+9);
	printf("���������� RH%c�Դϴ�", '+');
	printf("���� �̸����� %s@%s�Դϴ�","abcd","defg.com");
	printf("���ǽ÷��� %f %f �Դϴ�", 0.3, 0.5);

	return 0;
}