#include<stdio.h>
//(Âü°í·Î ¶ì ¼ø¼­´Â Áã->¼Ò->È£¶ûÀÌ->Åä³¢->¿ë->¹ì->¸»->¾ç->¿ø¼şÀÌ->´ß->°³->µÅÁö)
int main()
{
	printf("ÅÂ¾î³­ ¿¬µµ?\n");
	int byear;
	scanf("%d", &byear);
	byear = byear % 12;
	if (byear == 9)
		printf("¹ì¶ì\n");
	else if (byear == 10)
		printf("¸»¶ì\n");
	else if (byear == 11)
		printf("¾ç¶ì\n");
	else if (byear == 0)
		printf("¿ø¼şÀÌ¶ì\n");
	else if (byear == 1)
		printf("´ß¶ì\n");
	else if (byear == 2)
		printf("°³¶ì\n");
	else if (byear == 3)
		printf("µÅÁö¶ì\n");
	else if (byear == 4)
		printf("Áã¶ì\n");
	else if (byear == 5)
		printf("¼Ò¶ì\n");
	else if (byear == 6)
		printf("È£¶ûÀÌ¶ì\n");
	else if (byear == 7)
		printf("Åä³¢¶ì\n");
	else if (byear == 8)
		printf("¿ë¶ì\n");
	else
		printf("???\n");


	switch (byear)
	{
	case 0:
		printf("¿ø¼şÀÌ¶ì\n");

		break;
	case 1:
		printf("´ß¶ì\n");

		break;
	case 2:
		printf("°³¶ì\n");

		break;
	case 3:
		printf("µÅÁö¶ì\n");

		break;
	case 4:
		printf("Áã¶ì\n");

		break;
	case 5:
		printf("¼Ò¶ì\n");

		break;
	case 6:
		printf("È£¶ûÀÌ¶ì\n");

		break;
	case 7:
		printf("Åä³¢¶ì\n");

		break;
	case 8:
		printf("¿ë¶ì\n");

		break;
	case 9:
		printf("¹ì¶ì\n");

		break;
	case 10:
		printf("¸»¶ì\n");

		break;
	case 11:
		printf("¾ç¶ì\n");

		break;
	default:
		printf("???\n");

		break;
	}
	return 0;
}