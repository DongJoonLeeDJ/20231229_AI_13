#pragma once
//이런식으로 헤더파일에서 구조체를 정의할 수도 있다.
struct KBStudent
{
	int age;
	char gen;//'M' = 남자, 'F' = 여자
	char name[100];
	char snum[20]; //주민번호
}typedef KBStudent; //typedef 생략시 
//변수 선언할 때 마다 struct KBStudent라고 적어야 함
//즉 typedef의 역할은 이 자료형의 별명을 붙인 것
//struct KBStudent -> KBStudent로 요약함
