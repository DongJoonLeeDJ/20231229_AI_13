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
        printf("������ ���� á���ϴ�.\n");
    else
    {
        printf("%d�߰�\n", value);
        stack[++top] = value;
    }
}

int pop() {
    if (IsEmpty() == 1)
        printf("������ ������ϴ�.\n");
    else
        return stack[top--];
}

void main() {

    push(3);
    push(5);
    push(12);
    push(99);//�̹� �� �� ���¿��� ȣ���ϱ�
    printf("%d����\n", pop());
    printf("%d����\n", pop());
    printf("%d����\n", pop());
    //�ƹ� �͵� ���� ���¿��� ȣ���ϱ�
    pop();

}
