#include<stdio.h>
int main()
{
	//4-3. char ch ��� ������ ���� ���� ���� ��, ���� ���� ¦�� �Է��ϸ� ch�� 2, Ȧ�� �Է��ϸ� ch�� 1, 0�� ��쿡�� 0�� �Է� �� �� ���� ����Ѵ�.
	int num;
	char ch;
	printf("4-3. ���� �Է�\n");
	scanf("%d", &num);
	if (num == 0)
		ch = '0';
	else if (num % 2 == 1) //Ȧ��
	//else if (num%2!=0) //���� �ڵ���(Ȧ��üũ)
		ch = '1';
	else
		ch = '2'; //�� ��쿣 else �ʿ�!
	//�ֳĸ� else�� ������ ch ���� �Ҵ���� �����Ƿ�
	//ch�� ����� �� ���� �����̴�!!!
	printf("ch=%c\n", ch);

	//����
	//if else if else�� if if else�� ������
	//���� �ڵ�� ch�� 0,1,2 �� �ϳ��� ���� ����
	//�Ʒ� �ڵ�� num�� 0�� ��쿡�� ���� else ������ ch�� 2�� ��!
	if (num == 0)
		ch = '0';
	if (num % 2 == 1) 
		ch = '1';
	else
		ch = '2';
	printf("(����)ch=%c\n", ch);


	return 0;
}