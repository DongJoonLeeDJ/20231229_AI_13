#include<stdio.h>
int main()
{
	//�������� ������ �Ǽ��� �Է¹����Ƿ�
	//rewind �ڵ�� �� �ʿ����
	int w, h, z;//�簢���� ������ü�� ����
	const double PI = 3.14; //�������� ���
	int r; //������
	printf("5. w�� h �Է�\n");
	scanf("%d %d", &w, &h);
	printf("�簢���� ���� : %d\n", w * h);

	printf("6. w,h,z �Է�\n");
	scanf("%d,%d,%d", &w, &h, &z);
	printf("������ü ���� : %d\n", w * h * z);

	printf("7. ������(r) �Է�\n");
	scanf("%d", &r);
	printf("���� ���� : %lf\n",(4.0/3)*PI*(r*r*r));

	return 0;
}