#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct NODE {             // 연결 리스트의 노드 구조체
    struct NODE* next;    // 다음 노드의 주소를 저장할 포인터
    int data;             // 데이터를 저장할 멤버
}typedef NODE;

NODE* head=NULL; //가장 첫번째 위치에 대해서는 전역 변수로 선언한다.

NODE* findPrevNode(int index) //index번째의 전에 위치한 노드를 찾는다. 이 노드의 next를
{                             //새롭게 생성한 노드로 바꿀 것이고, 현재 노드는 새로운 노드의 next가 된다.
    NODE* prev = head;
    for (int i = 0; i <= index-1; i++)//맨 앞에 새로 값 추가를 위해서 이 함수 호출시 
    {                                //이 for문은 index-1=-1이므로 한 번도 실행 안 함
        prev = prev->next;
    }
    return prev;
}
void my_printList()
{
    NODE* curr = head->next;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
void addNewNode(int index, int data)   //원하는 index에 노드추가하는 함수
{
    if (head == NULL) //가장 처음에 값 추가하기
    {
        NODE* newNode = malloc(sizeof(NODE));
        head = malloc(sizeof(NODE));
        newNode->data = data;
        head->next = newNode;
        newNode->next = NULL;
    }
    else
    {
        NODE* prev = findPrevNode(index);
        if (prev != NULL)
        {
            NODE* newNode = malloc(sizeof(NODE));
            newNode->next = prev->next;
            prev->next = newNode;
            newNode->data = data;
        }
    }
}

void removeOldNode(int index)
{
    NODE* prev = findPrevNode(index); //내가 지우고자 하는 것의 전 위치값
    NODE* myRemoveNode = prev->next; //내가 지우고자 하는 것의 위치값
    prev->next = (prev->next)->next; //그 전위치의 next를 그다음껄로 바꿈
    free(myRemoveNode); //내가 지우고자 하는 것의 위치값을 입력하여 그 부분 메모리 제거함
}
void main()
{
    addNewNode(0, 1); //가장 첫번째에 값 1 추가   결과 : 1
    addNewNode(0, 2); //가장 첫번째에 값 2 추가   결과 : 2 1
    addNewNode(0, 3); //가장 첫번째에 값 3 추가   결과 : 3 2 1
    addNewNode(1, 999);//[1]번째 노드(=두 번째 노드) 값 999 추가   결과 : 3 999 2 1
    addNewNode(4, 777);//[4]번째 노드(=다섯 번째 노드) 값 777 추가   결과 : 3 999 2 1 777
    printf("값들을 추가한 후\n");
    my_printList();
    removeOldNode(1);
    printf("[1]번째 노드(=두 번째 노드) 제거한 후\n");
    my_printList(); //[1]번째 노드(=두 번째 노드) 제거   결과 : 3 2 1 777
}