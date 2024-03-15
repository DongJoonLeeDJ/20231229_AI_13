#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct NODE {             // ���� ����Ʈ�� ��� ����ü
    struct NODE* next;    // ���� ����� �ּҸ� ������ ������
    int data;             // �����͸� ������ ���
}typedef NODE;

NODE* head=NULL; //���� ù��° ��ġ�� ���ؼ��� ���� ������ �����Ѵ�.

NODE* findPrevNode(int index) //index��°�� ���� ��ġ�� ��带 ã�´�. �� ����� next��
{                             //���Ӱ� ������ ���� �ٲ� ���̰�, ���� ���� ���ο� ����� next�� �ȴ�.
    NODE* prev = head;
    for (int i = 0; i <= index-1; i++)//�� �տ� ���� �� �߰��� ���ؼ� �� �Լ� ȣ��� 
    {                                //�� for���� index-1=-1�̹Ƿ� �� ���� ���� �� ��
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
void addNewNode(int index, int data)   //���ϴ� index�� ����߰��ϴ� �Լ�
{
    if (head == NULL) //���� ó���� �� �߰��ϱ�
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
    NODE* prev = findPrevNode(index); //���� ������� �ϴ� ���� �� ��ġ��
    NODE* myRemoveNode = prev->next; //���� ������� �ϴ� ���� ��ġ��
    prev->next = (prev->next)->next; //�� ����ġ�� next�� �״������� �ٲ�
    free(myRemoveNode); //���� ������� �ϴ� ���� ��ġ���� �Է��Ͽ� �� �κ� �޸� ������
}
void main()
{
    addNewNode(0, 1); //���� ù��°�� �� 1 �߰�   ��� : 1
    addNewNode(0, 2); //���� ù��°�� �� 2 �߰�   ��� : 2 1
    addNewNode(0, 3); //���� ù��°�� �� 3 �߰�   ��� : 3 2 1
    addNewNode(1, 999);//[1]��° ���(=�� ��° ���) �� 999 �߰�   ��� : 3 999 2 1
    addNewNode(4, 777);//[4]��° ���(=�ټ� ��° ���) �� 777 �߰�   ��� : 3 999 2 1 777
    printf("������ �߰��� ��\n");
    my_printList();
    removeOldNode(1);
    printf("[1]��° ���(=�� ��° ���) ������ ��\n");
    my_printList(); //[1]��° ���(=�� ��° ���) ����   ��� : 3 2 1 777
}