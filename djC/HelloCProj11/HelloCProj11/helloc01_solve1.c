#include<stdio.h>
int main()
{
	char test[1024];
	printf("������ �Է��ϼ���\n");
	gets(test);
	//1. byte�� ���
	//while���� �̿��ص� �ǰ� for���� �̿��ص� ��
	//1. �ܼ� ����Ʈ ���
	//int mybyte = 0;
	//while (test[mybyte] != NULL)
	//	mybyte++;
	//printf("����Ʈ �� : %d\n", mybyte);
	//1-2. for �̿�
	int bytecount = 0;
	//for (bytecount = 0; test[bytecount] != NULL; bytecount++){}
	for (bytecount = 0; test[bytecount] != NULL; bytecount++);
	printf("1. ����Ʈ ũ�� : %d byte\n", bytecount);
	int count = 0; //���ڼ�
	for (int i = 0; test[i] != NULL; i++)
	{
		if (test[i] >= 0 && test[i] <= 127)
			count++;
		else //ASCII���� ��� ���
		{
			i++; //�ε����� �ϳ� �� ������Ŵ
			count++;//�׸��� ���� ���ڼ��� �ϳ� ������Ŵ
		}
	}
	printf("2. ���� �� :%d��\n", count);


	return 0;
}