#include<stdio.h>
#define MAX_STACK_SIZE 3

int stack[MAX_STACK_SIZE];
int top = -1;

int IsEmpty() {
    if (top < 0)
        return 1;
    else
        return 0;
}
int IsFull() {
    if (top >= MAX_STACK_SIZE - 1)
        return 1;
    else
        return 0;
}

void push(int value) {
    if (IsFull() == 1)
        printf("스택이 가득 찼습니다.\n");
    else
    {
        printf("%d추가\n", value);
        stack[++top] = value;
    }
}

int pop() {
    if (IsEmpty() == 1)
        printf("스택이 비었습니다.\n");
    else
        return stack[top--];
}

void main() {

    push(3);
    push(5);
    push(12);
    push(99);//이미 꽉 찬 상태에서 호출하기
    printf("%d삭제\n", pop());
    printf("%d삭제\n", pop());
    printf("%d삭제\n", pop());
    //아무 것도 없는 상태에서 호출하기
    pop();

}
