//4-5. ������ �Է¹ް� �׿� ���� �а� �ʸ� ����ϵ�, 3600 �̻��� ��� "��� sec �� �ʰ�" ���
#include<stdio.h>
int main()
{
	//����
	//���� ���忡�� �����ϰų�
	//���忡�� ���ܸ� �߸��ϸ� ���������� ������ �ڵ带 �����ϴ�
	//������ ��
	int sec;
	printf("4-5. �� �Է�\n");
	scanf("%d", &sec);
	if (sec >= 3600 || sec < 0)
		printf("��� sec �� �ʰ�\n");
	else
	{
		printf("%d�� %d��\n", sec / 60, sec % 60);
	}

	//����
	if (sec >= 3600 || sec < 0)
		printf("��� sec �� �ʰ�\n");
	//else if(sec>=0 && sec<60) //���� �ڵ�
	else if (sec >= 0 && sec <= 59)
		printf("%d��\n", sec);
	else
	{
		printf("%d�� %d��\n", sec / 60, sec % 60);
	}
	return 0;
}