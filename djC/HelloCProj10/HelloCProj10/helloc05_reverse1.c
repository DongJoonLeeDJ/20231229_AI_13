#include<stdio.h>
int main()
{
	printf("�Ųٷ� ����� ���ڿ��� �Է��ϼ���\n");
	char input[1000];
	char reverseInput[1000];
	gets(input);
	int reverseIndex = 0; //�Ųٷ� ���� �� �� �ʿ��� ���� ����
	//reverseIndex ���ϴ� ��� 2������ ����
	//1. for�� �̿��ϴ� ���
	//for ���� �����ݷ��� ���� �ʴ� �� ����.
	//�׷��� �� ��쿡�� reverseIndex ���� �߿��ϹǷ�
	//�����ݷ��� �ص� ��
	//�����ݷ��� �ȴٸ� �׳� {}�� �ᵵ ��
	
	//for (reverseIndex = 0; input[reverseIndex] != NULL; reverseIndex++);
	//for (reverseIndex = 0; input[reverseIndex] != NULL; reverseIndex++){}

	//2. while �� Ȱ���ϴ� ���
	while (input[reverseIndex] != NULL)
		reverseIndex++; //�ϳ��� ���� -> ���� �Է��� ���ڿ��� ���� ���ϱ�
	int i = 0; //reverseInput�� �� ���ڿ� ���� �ε���
	for (; reverseIndex > 0; i++)
	{
		reverseInput[i] = input[reverseIndex - 1];
		reverseIndex--;
	}
	reverseInput[i] = NULL;
	printf("%s %s\n", input, reverseInput);



	return 0;
}