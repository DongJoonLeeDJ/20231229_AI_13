#include<stdio.h>
int main()
{
	int age = 35;
	double height = 173.5;
	char emo = '+';//'-' ,'0'
	printf("���� %d���Դϴ�. Ű�� %fcm�Դϴ�. ������ ����� %c�Դϴ�.", age, height, emo);
	//alt + �� �Ʒ� : �ڵ� �̵�
	//ctrl + d �ڵ� ���� & �ٿ��ֱ�(�� ��)
	age = 2025 - 1989;
	height = 173.5 - 1.5;
	emo = '-';
	printf("\n���� %d���Դϴ�. Ű�� %fcm�Դϴ�. ������ ����� %c�Դϴ�.", age, height, emo);
	emo = emo - 2;
	printf("\n��� : %c\n", emo);
	printf("��� ���� : %c %c %c\n", 43, 48, 45);
	printf("�θ�� ���� : %d\n", 'A');
	//%d = decimal �� ����, ����
	//%f = float�� ����, �Ǽ�
	//%c = char�� ����, ����(1���� ¥��, ����ǥ�� ������)

	//char Ÿ���� ������ 1:1�� ������
	//ASCII ��� �԰ݿ� ���ؼ� �׷���
	//American Standard Code for information interchange



	return 0;
}