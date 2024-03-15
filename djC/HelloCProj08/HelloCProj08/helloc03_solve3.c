#include<stdio.h>
int main()
{
	int inputSugar;
	printf("설탕 몇kg?\n");
	scanf("%d", &inputSugar);
	int pack = 0; //주머니 수
	while (1)
	{
		if (inputSugar % 5 == 0)
		{
			pack += inputSugar / 5;
			printf("%d묶음\n", pack);
			break;
		}
		inputSugar -= 3; //3kg만큼 뺀다(주머니 1개 추가)
		pack++;
		if (inputSugar < 0) //5와 3으로 딱 떨어지지 않는 경우
		{
			printf("-1\n");
			break;
		}
	}
	return 0;
}