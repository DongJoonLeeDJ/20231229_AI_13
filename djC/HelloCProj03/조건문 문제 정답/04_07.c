//7. �� ���̿� Ű�� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.��, ���� Ȥ�� Ű�� ������ ��� �߸��ƴٴ� �޽����� ����Ͻÿ�.
#include<stdio.h>
int main()
{
	int age;
	double h;
	printf("4-7. ���̿� Ű �Է�\n");
	scanf("%d %lf", &age, &h);
	if (age < 0 || h < 0)
		printf("�߸��� �Է�!!\n");
	else
	{
		printf("����:%d��, Ű:%f\n", age, h);
		printf("����:%d��, Ű:%lf\n", age, h);
		printf("����:%d��, Ű:%.1lf\n", age, h);
	}
	return 0;
}