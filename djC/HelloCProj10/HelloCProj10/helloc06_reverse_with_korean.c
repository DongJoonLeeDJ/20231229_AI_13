#include<stdio.h>
int main()
{
	//�� ���� char �迭�� �����ؾ� �ϰ�, �� �͵��� ���� NULL�� �ʱ�ȭ
	char sentense1[1024] = { NULL };
	char sentense2[1024] = { NULL };
	printf("���� ���ڿ� �Է�\n");
	gets(sentense1);
	int count = 0; //���ڼ��� �� ������ ����
	for (count = 0; sentense1[count] != NULL; count++); //abcd �Է½� count=4
	int i = 0; //���ʺ��� ���� ����
	int len = count - 1; //���ʺ��� ���� ����
	for (i = 0; sentense1[i] != NULL; i++, len--) //i++, len--
	{
		if (sentense1[i] >= 0 && sentense1[i] <= 127) //�ƽ�Ű�ڵ忡 ���Ե� ���
			sentense2[len] = sentense1[i];
		else
		{
			if (len <= 0)
				break; //�̷� ���� ����
			sentense2[len - 1] = sentense1[i];
			sentense2[len] = sentense1[i+1];
			i++;
			len--;
		}
	}
	printf("%s %s\n", sentense1, sentense2);


	return 0;
}