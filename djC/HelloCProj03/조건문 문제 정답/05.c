//5. ���� �¾ ���� �Է��ϰ�, �� ���� ������ ����ϼ���.
//12, 1, 2�� �ܿ��̸� 3, 4, 5�� ��, 6, 7, 8�� ����, 9, 10, 11�� �����̸� �� ���� ���� ���ؼ� ����ó���ϱ�
#include<stdio.h>
int main()
{
	int month;
	printf("5. �¾ �� �Է�\n");
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		printf("�ܿ�\n");
	else if (month >= 3 && month <= 5)
		printf("��\n");
	else if (month > 5 && month < 9)
		printf("����\n");
	else if (month >= 9 && month <= 11)
		printf("����\n");
	else
		printf("%d���� �����ϴ�.\n", month);
	return 0;
}