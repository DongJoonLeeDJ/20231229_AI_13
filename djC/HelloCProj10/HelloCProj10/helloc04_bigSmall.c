#include<stdio.h>
int main()
{
	printf("������ �Է��Ͻÿ�\n");
	char test[100];
	gets(test);
	//�Է¹��� ���ڿ��� �� ���ھ� �о���̴� �۾��� �ؾ� �Ѵ�.
	//�ݺ����� ��� ��
	//for���� ���� ����ϱⰡ ���� ��
	//���Ǻ� �κ��� �� �޶����� �ϴ� ��, 
	//������ �� ���� NULL(='\0' Ȥ�� 0)�̶�� �� �̿��ϸ� ��

	//for (int i = 0; test[i] != NULL; i++)
	//for (int i = 0; test[i] != 0; i++)
	printf("%s\n", test);
	for (int i = 0; test[i] != '\0'; i++)
	{
		if (test[i] >= 'A' && test[i] <= 'Z')
			test[i] += ('a' - 'A'); //ASCII �ڵ� ǥ ����!
		else if (test[i] >= 'a' && test[i] <= 'z')//�׳� if���� �� ��!!!
			test[i] -= ('a' - 'A');
		else if (test[i] == ' ') //���鸸 �׳� �Ѿ�� �ϰ� �ʹٸ� �߰�!
			continue;
		else
		{
			printf("%c�� ���ĺ��� �ƴմϴ�.\n", test[i]);
		}
		//�����̳� �̻��� ���ڵ��� �ƹ��� ó���� ���� ����
		//��� ���ܰ� �ʿ����.
		//���� ���ܰ� �ʿ��ϴٸ� else���� �߰����ָ� �ȴ�.
	}
	printf("%s\n", test);
	return 0;
}