#include<stdio.h>
int main()
{
	//1. �ڽ��� �̸�, MBTI, ����, ������, ���̸� �Է� �� ����Ѵ�.
	char name[100]; //�̸��̴ϱ� �˳��ϰ� �����
	char mbti[5]; //4���ڰ� �ִ��̹Ƿ� 4+1�� ũ�� �����
	char gen[10]; //���� ���� ���� ���� M F Female Male ��...
	char bType[10]; //AB RH+ ��...
	int age;
	
	char name2[100]; //�̸��̴ϱ� �˳��ϰ� �����
	char mbti2[5]; //4���ڰ� �ִ��̹Ƿ� 4+1�� ũ�� �����
	char gen2[10]; //���� ���� ���� ���� M F Female Male ��...
	char bType2[10]; //AB RH+ ��...
	char age2[5]; //���ڿ��μ� �Է¹ޱ� 35 �� ��ʿ��� �ƴϰ� ���
	printf("�̸��� �����ΰ���?\n");
	gets(name);
	printf("mbti��?\n");
	gets(mbti);
	printf("������?\n");
	gets(gen);
	printf("��������?\n");
	gets(bType);
	printf("���̴�?\n");
	scanf("%d", &age);
	printf("�̸�:%s, mbti:%s, ����:%s, ������:%s, ����:%d\n",
		name,mbti,gen,bType,age);

	//����, �Ǽ�, ���� �� scanf �Է� �� gets�� ���ڿ� �Է¹������� �ϰų�
	//Ȥ�� scanf�� ���� �Է¹������� �� ��� rewind�� ���� ó���� �ʿ���
	//����� C ���� ǥ���� �Ʒ� �ڵ���
	while (getchar() != '\n'); //while���� ���� ���� �����ݷ� ������ ����
	//while (getchar() != '\n') {} //�̷��� ��� ��
	//�� �� �ڵ�� getchar�� ���� ������ ���ڸ� �ƹ��ų� �ϳ� �Է¹޴� �ڵ��̸�
	//���ۿ� ����� \n�� �Է¹޴� �ڵ�(=\n�� �Ҹ��Ű�� �ڵ�)�̹Ƿ� �̷��� �ۼ���
	printf("�̸��� �����ΰ���?\n");
	gets(name2);
	printf("mbti��?\n");
	gets(mbti2);
	printf("������?\n");
	gets(gen2);
	printf("��������?\n");
	gets(bType2);
	printf("���̴�?\n");
	gets(age2);
	//scanf("%d", &age);
	printf("�̸�:%s, mbti:%s, ����:%s, ������:%s, ����:%s\n",
		name2, mbti2, gen2, bType2, age2);

	return 0;
}