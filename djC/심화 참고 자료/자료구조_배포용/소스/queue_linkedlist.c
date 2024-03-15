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

    printf("%d 삽입 완료.\n", item);
    Node* curr = front;
    printf("현재 queue에 저장된 데이터들 목록\n");
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
        printf("더 이상 데이터가 없으므로 deQueue를 못 합니다.\n");
        return 0;
    }

    Node* old;
    old = front;
    int item = front->data;
    front = front->next;

    printf("deQueue 완료\n");
    printf("deQueue로 빠져나가는 데이터 : %d\n", old->data);
    free(old);
    
    if (front == NULL)
    {
        printf("이제 모든 데이터가 다 빠져나갔습니다.\n");
        rear = NULL;
    }
    else {
        Node* curr = front;
        printf("현재 queue에 저장된 데이터들 목록\n");
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
    deQueue();  // 3 -> 이제 없음
    deQueue();//더 이상 빠져나갈 데이터가 없다고 메시지 출력함
    return 0;
}

//출처: https://tildacoderecorder.tistory.com/103 [틸다 코드 기록장]