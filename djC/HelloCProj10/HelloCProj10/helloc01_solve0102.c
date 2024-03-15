#include<stdio.h>
int main()
{
	//1. 자신의 이름, MBTI, 성별, 혈액형, 나이를 입력 후 출력한다.
	char name[100]; //이름이니까 넉넉하게 잡았음
	char mbti[5]; //4글자가 최대이므로 4+1로 크기 잡았음
	char gen[10]; //남자 여자 여성 남성 M F Female Male 등...
	char bType[10]; //AB RH+ 등...
	int age;
	
	char name2[100]; //이름이니까 넉넉하게 잡았음
	char mbti2[5]; //4글자가 최대이므로 4+1로 크기 잡았음
	char gen2[10]; //남자 여자 여성 남성 M F Female Male 등...
	char bType2[10]; //AB RH+ 등...
	char age2[5]; //문자열로서 입력받기 35 는 삼십오가 아니고 삼오
	printf("이름은 무엇인가요?\n");
	gets(name);
	printf("mbti는?\n");
	gets(mbti);
	printf("성별은?\n");
	gets(gen);
	printf("혈액형은?\n");
	gets(bType);
	printf("나이는?\n");
	scanf("%d", &age);
	printf("이름:%s, mbti:%s, 성별:%s, 혈액형:%s, 나이:%d\n",
		name,mbti,gen,bType,age);

	//정수, 실수, 문자 등 scanf 입력 후 gets로 문자열 입력받으려고 하거나
	//혹은 scanf로 문자 입력받으려고 할 경우 rewind와 같은 처리가 필요함
	//참고로 C 권장 표준은 아래 코드임
	while (getchar() != '\n'); //while문에 원래 끝에 세미콜론 붙이지 않음
	//while (getchar() != '\n') {} //이렇게 적어도 됨
	//단 이 코드는 getchar를 통해 임의의 문자를 아무거나 하나 입력받는 코드이며
	//버퍼에 저장된 \n을 입력받는 코드(=\n을 소모시키는 코드)이므로 이렇게 작성함
	printf("이름은 무엇인가요?\n");
	gets(name2);
	printf("mbti는?\n");
	gets(mbti2);
	printf("성별은?\n");
	gets(gen2);
	printf("혈액형은?\n");
	gets(bType2);
	printf("나이는?\n");
	gets(age2);
	//scanf("%d", &age);
	printf("이름:%s, mbti:%s, 성별:%s, 혈액형:%s, 나이:%s\n",
		name2, mbti2, gen2, bType2, age2);

	return 0;
}