#include<stdio.h>
int main()
{
	int num;
	while (0) //while(1) = ���ѹݺ�, while(0) = �� ���� ���� �� ��
	{
		printf("���� �Է�\n");
		scanf("%d", &num);
		if (num < 0)
			break;
		if (num == 0)
			continue;//for�Ӿƴϰ� while������ ����
		printf("%d�� ���� : %d\n", num, num * num);
	}
	//2. A���� Z, �׸��� a���� z�� ����Ͻÿ�.
	for (char i = 'A'; i <= 'z'; i++)
	{
		if (i > 'Z' && i < 'a') //91~96������ ����!
			continue;

		printf("%c ", i);
	}
	//continue ���� �ϴ� ��
	printf("\n");
	for (char i = 'A'; i <= 'z'; i++)
	{
		if( (i>='A'&&i<='Z') || (i >= 'a' && i <= 'z'))
			printf("%c ", i);
	}
	//3. 1���� 10������ ���� ����Ͻÿ�.
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	printf("1���� 10������ �� : %d\n", sum);

	//4. 1x2x3x4x5x6x7x8x9x10=3628800
	printf("1");
	for (int i = 2; i <= 10; i++)
		printf("x%d", i);
	printf("=%d\n", sum);

	
	if (0)
	{
		//5. ������ ����
		//A B V�� �Է¹޾ƾ� ��
		//A : �Ϸ翡 �ö󰡴� ����, B: �Ϸ翡 �������� ����, V:�� ����
		//ex) 2 1 5 -> 4, 5 1 6 -> 2, 100 99 1000000000 => 999999901
		printf("A B V �Է�\n");
		int a, b, v;
		int day = 0, distance = 0;
		scanf("%d %d %d", &a, &b, &v);
		while (1)
		{
			day++; //�Ϸ簡 ����
			distance += a; //a��ŭ �ö�
			if (distance >= v)
				break; //��ǥ ���̱��� �ö����� ����
			distance -= b; //���� �Ǿ� �̲����� ������
		}
		printf("�� �ҿ� �� : %d\n", day);
	}

	//6. ������ ��� �ڵ�
	//��ø �ݺ��� ���� �⺻���� ����

	//for������ �ϴ� ���
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
			printf("%d x %d = %d\n", i, j, i * j);
	}
	//while������ �ϴ� ���
	int i = 2;
	while (i < 10)
	{
		int j = 1;
		while (j < 10)
		{
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
	}
	//7. �Է¿� ���� ���
	printf("\n�� ���� �Է��ϼ���\n");
	int floor;
	scanf("%d", &floor);
	for (int i = 0; i < 2 * floor; i++)
	{
		int onOffSwitch = i; //�����̶� �� ��� ���� ����(flag ����)
		for (int j = 0; j < floor; j++)
		{
			if (onOffSwitch % 2 == 0)
				printf("*");
			else
				printf(" ");
			onOffSwitch++;
		}
		printf("\n");
	}

	return 0;
}