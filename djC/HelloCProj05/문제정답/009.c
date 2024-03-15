#include<stdio.h>
int main()
{
	int x, y;
	printf("x¿Í y ÀÔ·Â\n");
	scanf("%d %d", &x, &y);
	int xx = x > 0 && y > 0;
	switch (xx)
	{
	case 1:
		printf("1\n");
		break;
	default:
		xx = x < 0 && y < 0;
		switch (xx)
		{
		case 1:
			printf("3\n");
			break;
		default:
			xx = x < 0 && y>0;
			switch (xx)
			{
			case 1:
				printf("2\n");
				break;
			default:
				xx = x > 0 && y < 0;
				switch (xx)
				{
				case 1:
					printf("4\n");
					break;
				default:
					printf("0\n");
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	return 0;
}