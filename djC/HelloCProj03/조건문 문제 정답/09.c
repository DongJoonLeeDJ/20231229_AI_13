/*
9. �ʸ� �Է� �� �׿� ���� �а� �ʸ� ����Ͻÿ�.
��, 0 �̸��� ���̳� 3600 �̻��� �� �Է� �� �ٽ� �Է��ϰ� �Ͻÿ�.
hint) goto��(����� ���������� �ǹ����� ���̴� ��찡 �����Ƿ� �ٷ��, ���� �ð��� �ٷ��� �ʾ���)
*/
#include<stdio.h>
int main()
{
	int sec;
	AGAIN:
	printf("�ʸ� �Է��ϼ���\n");
	scanf("%d", &sec);
	if (sec < 0 || sec >= 3600)
		goto AGAIN;
	else
		printf("%d�� %d��\n", sec / 60, sec % 60);
	return 0;
}