//4-6. ���� �¾ ������ ���� ���� �Է��ؼ� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//��, �¾ ������ �� ū ��쿡 ���ؼ��� �߸��ƴٰ� ����Ͻÿ�.
#include<stdio.h>
int main()
{
	int birth,now;
	printf("4-6. �¾ ������ ���� ���� �Է�\n");
	scanf("%d %d", &birth, &now);
	if (birth > now)
		printf("�߸��� �� �Է�!!\n");
	else
		printf("���� : %d��\n", now - birth);
	return 0;
}