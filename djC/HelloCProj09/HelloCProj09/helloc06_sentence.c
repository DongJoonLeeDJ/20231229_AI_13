#include<stdio.h>
int main()
{

	//char test[1000];   
	//scanf("%s", test); //lee dong joon 입력시
	//printf("%s", test); //lee만 출력됨(스페이스바랑 엔터키 기준으로 짜름)
	
	//char test[1000]; 
	//gets(test);// lee dong joon
	//printf("%s", test); //lee dong joon이 전부 출력됨



	//문자 = 따옴표로 감쌈 = 1Byte(C) or 2Byte(java, c# 등)
	//C 기준으로는 영문, 특수문자, 숫자 한 글자만을 문자 하나로 간주
	//딱 한 글자만을 의미하고 따옴표('')로 감싼다.
	//문자열 = 한 글자 "이상"을 의미하고 큰 따옴표로 감쌉니다.

	//문자열을 저장하는 방법들(할당)
	char* name = "한형빈";//gets나 scanf로 입력받고 싶을 땐 이렇게 쓰면 안 됨
	char myname[100] = "이동준"; // 이런 식으로 크기를 잡아야 함

	//유의 사항 : 배열의 크기를 넉넉하게 잡는 것이 좋다.
	//넉넉함의 기준 : 내가 영어를 기준으로 10글자 입력하고 싶으면
	//배열의 최소 길이는 10+1인 11이 되어야 함
	//한글이름 3글자를 적고 싶다면 1글자만 2byte이므로 배열의 크기는 최소
	//7바이트여야 함
	//NULL이라는 문자(ASCII 코드 0번)가 문장의 끝을 의미하기 때문임
	//이 것을 내가 인위적으로 삽입하기도 하고 자동 삽입되기도 함
 
	//키보드로 입력받고 싶은 경우 char 배열의 크기를 꼭 정해야 함
	char yourname[100];
	printf("당신의 이름은?\n");
	gets(yourname); //scanf를 써서 입력받는 것도 가능하지만
	//그 경우에는 spacebar(공백) 처리가 안 되서 곤란함
	//표준은 fgets이지만 gets가 가장 쓰기 편함

	printf("내 이름은 %s입니다.\n", yourname);
	printf("%s %s\n", name, myname);

	//배열의 크기를 + 1만큼 추가해야 하는 이유(즉 NULL값이 들어갈 공간이 필요한 이유)
	char djmbti[4] = "ISTP"; //여기서 문제가 발성할 것!!!
	char hbmbti[5] = "INTJ"; //여기서는 자동으로 끝에 NULL이라는 값이 들어감
	char djmbti2[5] = "ENTP\0"; //\0 혹은 NULL을 쓰면 됨
	char djmbti3[5] = "ESTP"; //\0 혹은 NULL을 쓰면 됨
	djmbti3[4] = NULL; //맨 끝 글자에 인위적으로 NULL을 넣어줌

	//NULL
	//1. 아무 것도 없음(!!!! 공백이랑 다른 거임 !!!!! 공백은 32라는 값이 있음)
	//2. 문장의 마무리를 의미하기도 함
	printf("%s\n", djmbti);//ISTP儆儆儆儆儆儆儆儆儆儆儆儆儆儆 (뭔가 이상해)
	printf("%s\n", hbmbti);
	printf("%s\n", djmbti2);
	printf("%s\n", djmbti3);

	//1. 왜 끝에 NULL이 없는 게 이상하게 출력되는 지 보여주기
	//2. scanf로 문자열 입력하는 걸 비추천하는 이유를 보여주기



	return 0;
}