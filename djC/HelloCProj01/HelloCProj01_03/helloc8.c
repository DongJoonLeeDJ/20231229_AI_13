#include<stdio.h>
int main()
{
	int birth, now;
	//int a, b, c, d, e, f, g; //�̰� ��
	//int year, double height; //�̰� �� ��
	printf("�¾ ������ ���� ���� �Է�");
	scanf("%d %d", &birth, &now);
	int age = now - birth;
	printf("���� : %d\n", age);

	printf("���̿� Ű�� �Է��ϼ���.");
	double height;
	scanf("%d %lf", &age, &height);
	printf("����:%d, Ű:%lf\n", age, height);

	printf("�����?");
	//���� �����ϸ� : ���ۿ� ���� ����Ű�� ������
	//��ư�(�������) �����ڸ� : ������ �����Ͱ� ó������ �̵���
	//�̿� ����� �̽��� java�� Scanner�� nextLine, nextInt��� ��Ÿ��
	rewind(stdin); //���ڿ� �Է¹ޱ� �� rewind Ȥ�� �Ʒ� �ڵ� ����
	//while (getchar() != '\n'); //c ǥ�� ����
	char emo;
	scanf("%c", &emo); //\n(=LF, Line Feed, ����Ű)�� �� ����
	//emo = getchar();
	printf("����� %c�Դϴ�.\n", emo);

	return 0;
}