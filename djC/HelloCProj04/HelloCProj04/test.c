#include<stdio.h>
int main()
{
	int xx = 0;//1 0 -1
	int yy = 0;//1 0 -1

	int a = xx == 0;
	switch (a)
	{
	case 1:
		printf("0\n");
		break;
	default:
		switch (a>0)
		{
		case 0://����
			break;
		case 1://���
			break;
		default:
			break;
		}
		break;
	}


	char ch;
#pragma region question

	if (0) //�� �ȿ� �ִ� �͵��� ���� ���� �� �Ǵ� �ڵ�
		//0 = ������ �ǹ��ϴϱ�....
	{
		//4-1. �¾ ������ �Է��Ѵ�. ������ ¦���� ��� �ǰ������� ��, �׷��� ���� ��� �ǰ������� �� �ƴ� ���
		int y;
		printf("4-1, 4-2. �¾ ���� �Է�\n");
		scanf("%d", &y);
		if (y % 2 == 0)
			printf("�ǰ������� ��\n");
		else
			printf("�ǰ������� �� �ƴ�\n");

		//4-2. 1���� �����ϵ� �¾ ������ 0�̶�� �� ��쿡 ���� ���ܵ� �߰��Ѵ�.
		if (y % 2 == 0)
		{
			if (y == 0)
				printf("�¾ ���� : 0\n");
			else
				printf("�ǰ������� ��\n");
		}
		else
			printf("�ǰ������� �� �ƴ�\n");
		//4-3. char ch ��� ������ ���� ���� ���� ��, ���� ���� ¦�� �Է��ϸ� ch�� 2, Ȧ�� �Է��ϸ� ch�� 1, 0�� ��쿡�� 0�� �Է� �� �� ���� ����Ѵ�.
		int num;
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

		//4-4. �� ���� ������ �Է��Ѵ�. �� ��° ���� �� Ŭ ��쿡�� �ι�°-ù��° ���,
		//ù��° ���� ũ�ų� ���� ��쿣 ù��° - �ι�° ���
		int num1, num2; //���� C�� ������ ������ �̸� �� �����ؾ� ����(������)
		printf("4-4. �� ���� ������ �Է��Ѵ�.(ex)3,5 ");
		//�Է½� �޸� �� �ʿ�
		//ex. 10,5
		//scanf("%d\n",&num1); �̷������� ���� �� ��
		//�̷��� �� ��� ���� �� �� �ľ� ��...
		scanf("%d,%d", &num1, &num2);
		if (num2 > num1)
			printf("%d\n", num2 - num1);
		else
			printf("%d\n", num1 - num2);
		int sec;
		printf("4-5. �� �Է�\n");
		scanf("%d", &sec);
		if (sec >= 3600 || sec < 0)
			printf("��� sec �� �ʰ�\n");
		else
		{
			printf("%d�� %d��\n", sec / 60, sec % 60);
		}

		//����
		if (sec >= 3600 || sec < 0)
			printf("��� sec �� �ʰ�\n");
		//else if(sec>=0 && sec<60) //���� �ڵ�
		else if (sec >= 0 && sec <= 59)
			printf("%d��\n", sec);
		else
		{
			printf("%d�� %d��\n", sec / 60, sec % 60);
		}

		int birth, now;
		printf("4-6. �¾ ������ ���� ���� �Է�\n");
		scanf("%d %d", &birth, &now);
		if (birth > now)
			printf("�߸��� �� �Է�!!\n");
		else
			printf("���� : %d��\n", now - birth);

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

		int n1, n2;
		printf("4-8. ù ��° ���� �Է�\n");
		scanf("%d", &n1);
		if (!(n1 < 100 || n1>999))
		{
			printf("�� ��° ���� �Է�\n");
			scanf("%d", &n2);
			if (n2 >= 100 && n2 <= 999)
			{
				printf("%d %d %d %d\n",
					n1 * (n2 % 10), n1 * ((n2 / 10) % 10), n1 * (n2 / 100), n1 * n2);
			}
			else
			{
				printf("�߸��� �Է�\n");
			}

		}
		else
			printf("�߸��� �Է�\n");
		int aa, bb, cc, dd, ee, ff;
		printf("4-9. 5 4 6 2 3 1 �� �ϳ��� �Է����ּ���. ");
		scanf("%d", &aa);
		if (aa < 1 || aa>6)
		{
			printf("�߸��� �Է�\n");
		}
		else
		{
			bb = (aa * 5) % 7;
			cc = (bb * 5) % 7;
			dd = (cc * 5) % 7;
			ee = (dd * 5) % 7;
			ff = (ee * 5) % 7;
			printf("%d %d %d %d %d %d\n", aa, bb, cc, dd, ee, ff);
		}

		printf("4-10. 4-9�� ���ǹ� ����, ���� �ϳ� �Է�\n");
		scanf("%d", &num); //������ ������ ���� ��Ȱ��
		if (num == 1)
			printf("1 5 4 6 2 3\n");
		else if (num == 2)
			printf("2 3 1 5 4 6\n");
		else if (num == 3)
			printf("3 1 5 4 6 2\n");
		else if (num == 4)
			printf("4 6 2 3 1 5\n");
		else if (num == 5)
			printf("5 4 6 2 3 1\n");
		else if (num == 6)
			printf("6 2 3 1 5 4\n");
		else
			printf("�߸��� �Է�\n");
		printf("4-11. �� �� �Է�\n");
		scanf("%d %d", &num1, &num2);

		int solve = num1 - num2;
		if (solve < 0)
			solve *= -1; //solve = solve * -1;
		printf("�� ���� ���� : %d\n", solve);
		printf("4-12. �ڽ��� ���� �̸� ù ���� �Է�\n");
		//char ch; //������ ������ ���� Ȱ��
	}

#pragma endregion
	if (0)
	{

	rewind(stdin); //������ \n ����
	scanf("%c", &ch);
	//printf("4-12. �ڽ��� ���� �̸� ù ���� �Է�\n");
	//char ch = getchar();
	printf("ch=%c\n", ch);
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + ('a' - 'A');
	else if (ch >= 'a' && ch <= 'z')
		ch = ch - ('a' - 'A');
	//else //�� �ڵ� ������ �뵵 : ���ĺ� �� �Է� �� ���� ó��
	//	ch = '!';

	printf("ch=%c\n", ch);
	}

	return 0;
}