#include<stdio.h>
int main()
{
	//1. �� ����� �̸��� ��̿� Ư�⸦ �ۼ��Ͽ� ����Ͻÿ�.
	printf("�̵���, ����, �ڵ�����ġ��\n");
	//2. �� ����� ����(����)�� Ű(�Ǽ�)�� ������ rh�� +���� -����(����) ����Ͻÿ�.
	//%d %f %c �̿��ϱ�
	printf("����:%d, Ű:%f, ������ : RH%c\n",35,173.4,'+');
	/*3. int, double, char ���� �����Ͽ�
		�� ����� ����, Ű, ������ rh�� ��ȣ(+�� - ) ���� ��
		����Ͻÿ�.*/
	int age = 35;
	age = 36;
	double cm = 173.45;
	//double cm = 175.645;
	cm = 173.15;
	char bTypeRH;
	bTypeRH = '-';//����
	//char bTypeRH = '-';
	printf("����:%d, Ű:%f, ������ : RH%c\n", age, cm, bTypeRH);

	//4. 3�� ������ �ϵ�, �Է¹޾Ƽ� �� ��
	//	�� ���ڸ� ���� ���� �Է¹ްų�
	//	rewind(stdin)�� ����� ��
	printf("���̴�?\n");
	scanf("%d", &age);
	printf("Ű��?\n");
	scanf("%lf", &cm);
	printf("RH +? -?\n");
	rewind(stdin);
	//bTypeRH = getchar();
	//while (getchar() != '\n'); //C ���� ǥ��
	scanf("%c", &bTypeRH);
	printf("%d %lf %c\n", age, cm, bTypeRH);
	return 0;
}