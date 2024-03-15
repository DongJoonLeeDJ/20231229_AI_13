#include <stdio.h>
#include <stdlib.h>

typedef struct stack {   // 연결 리스트 노드 구조체 정의
	int data;           // data를 저장할 변수
	struct stack* link;  // 다음 노드의 주소값을 저장할 포인터 변수(연결리스트의 next와 똑같은 것)
} stack;

stack* top;  // 스택의 맨 위의 노드 주소를 저장할 포인터 변수. 기본값은 NULL, 연결리스트의 head랑 똑같은 것

int isEmpty() {    // 스택이 공백 상태인지 검사하는 함수
	if (top == NULL) {    // top이 NULL인 경우
		printf("Error : Stack is Empty. \n");  // 에러 메시지 출력
		return 1;    // 1 반환 (true)
	}
	return 0;    // 0 반환 (false)
}

void push(int data) {    // 스택에 노드를 삽입하는 함수
	stack* newnode = malloc(sizeof(stack));   // 새로운 노드 newnode 동적 할당
	newnode->data = data;     // newnode의 data에 값 저장
	newnode->link = top;      // newnode의 link에 맨 위의 노드 주소 저장(아무것도 없을 때 첫 push땐 top에 NULL 저장되어 있음)
	top = newnode;            // 이제 newnode가 맨 위의 노드가 되었으므로 top에 newnode 주소 저장
}

char pop() {     // 스택에 노드를 제거하는 함수
	if (!isEmpty()) {    // 배열이 비어있지 않은 경우
		stack* temp = top;    // temp 포인터 변수를 선언해 맨 위 노드의 주소값을 저장
		char data = temp->data;   // data 변수를 새로 선언하여 맨 위 노드의 데이터 저장
		top = temp->link;     // top 포인터에 2번째 노드의 주소값 저장
		free(temp);           // 맨 위 노드 제거
		return data;          // 데이터 반환
	}
}

char peek() {      // 스택의 맨 위의 원소를 반환하는 함수
	if (!isEmpty()) {     // 스택이 비어 있지 않은 경우
		return top->data;     // 맨 위 노드의 데이터 반환
	}
}

void printStack() {     // 스택을 출력할 함수
	if (!isEmpty()) {    // 스택이 비어있지 않은 경우
		stack* temp = top;     // 각 노드들을 접근하기 위한 temp 변수 선언
		while (temp) {     // 현재 노드가 NULL이 아닐 경우 반복 
			printf("%d ", temp->data);  // 현재 가리키는 노드의 data 출력
			temp = temp->link;          // temp가 다음 노드를 가리키도록 함
		}
		printf("\n");
	}
}


int main() {
	printStack(); // 스택 공백상태이므로 에러 발생
	push(1);
	push(2);
	push(3);
	printStack();
	pop();
	push(4);
	push(5);
	push(6);
	printStack();
	pop();
	pop();
	printStack();
	printf("현재의 top에는 %d가 있습니다.\n", peek());
	return 0;
}
