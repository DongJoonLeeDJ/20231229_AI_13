#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

int enQueue(int item) {

    Node* new = (Node*)malloc(sizeof(Node));

    new->data = item;
    new->next = NULL;

    if (front == NULL) {
        rear = new;
        front = new;
    }
    else {
        rear->next = new;
        rear = new;
    }

    printf("%d ���� �Ϸ�.\n", item);
    Node* curr = front;
    printf("���� queue�� ����� �����͵� ���\n");
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
    return 1;
}
int deQueue() {
    if (front == NULL)
    {
        printf("�� �̻� �����Ͱ� �����Ƿ� deQueue�� �� �մϴ�.\n");
        return 0;
    }

    Node* old;
    old = front;
    int item = front->data;
    front = front->next;

    printf("deQueue �Ϸ�\n");
    printf("deQueue�� ���������� ������ : %d\n", old->data);
    free(old);
    
    if (front == NULL)
    {
        printf("���� ��� �����Ͱ� �� �����������ϴ�.\n");
        rear = NULL;
    }
    else {
        Node* curr = front;
        printf("���� queue�� ����� �����͵� ���\n");
        while (curr != NULL)
        {
            printf("%d ", curr->data);
            curr = curr->next;
        }
        printf("\n");
    }

    return item;
}

int main()
{
    enQueue(1); // 1
    enQueue(2); // 1 2
    enQueue(3); // 1 2 3
    deQueue();  // 1 2 3 -> 2 3
    deQueue();  // 2 3 -> 3
    deQueue();  // 3 -> ���� ����
    deQueue();//�� �̻� �������� �����Ͱ� ���ٰ� �޽��� �����
    return 0;
}

//��ó: https://tildacoderecorder.tistory.com/103 [ƿ�� �ڵ� �����]