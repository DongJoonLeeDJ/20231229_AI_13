#include<stdio.h>
int main()
{
	int dice;
	printf("�ֻ��� �� �Է�(1~6����)\n");
	scanf("%d", &dice);
	if(dice==1)
		printf("�ֻ��� �� ���� ���Խ��ϴ�.\n");
	else if(dice==2 || dice==3)
		printf("�ֻ��� ���� �̳� ���� ���Խ��ϴ�.\n");
	else if (dice == 4 || dice == 5)
		printf("�ֻ��� ���� �糪 ���� ���Խ��ϴ�.\n");
	else if(dice==6)
		printf("���� ū ���� ���Խ��ϴ�.\n");
	else
		printf("%d�� �߸��� ���Դϴ�.\n", dice);

	return 0;
}