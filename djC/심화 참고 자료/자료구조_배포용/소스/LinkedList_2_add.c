#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����

struct NODE {    // ���� ����Ʈ�� ��� ����ü
    struct NODE* next;    // ���� ����� �ּҸ� ������ ������
    int data;             // �����͸� ������ ���
}typedef NODE;

void addFirst(NODE* target, int data)    // ���� ��� �ڿ� ��带 �߰��ϴ� �Լ�
{
    struct NODE* newNode = malloc(sizeof(struct NODE));    // �� ��� ����
    newNode->next = target->next;    // �� ����� ���� ��忡 ���� ����� ���� ��带 ����
    newNode->data = data;            // ������ ����

    target->next = newNode;    // ���� ����� ���� ��忡 �� ��带 ����
}

void main()
{
    NODE* head = malloc(sizeof(struct NODE));    // �Ӹ� ��� ����
                                                        // �Ӹ� ���� �����͸� �������� ����
    head->next = NULL;

    addFirst(head, 10);    // �Ӹ� ��� �ڿ� �� ��� �߰�
    addFirst(head, 20);    // �Ӹ� ��� �ڿ� �� ��� �߰�
    addFirst(head, 30);    // �Ӹ� ��� �ڿ� �� ��� �߰�

    NODE* curr = head->next;    // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
    while (curr != NULL)               // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
    {
        printf("%d\n", curr->data);    // ���� ����� ������ ���
        curr = curr->next;             // �����Ϳ� ���� ����� �ּ� ����
    }

    curr = head->next;      // ���� ����Ʈ ��ȸ�� �����Ϳ� ù ��° ����� �ּ� ����
    while (curr != NULL)    // �����Ͱ� NULL�� �ƴ� �� ��� �ݺ�
    {
        NODE* next = curr->next;    // ���� ����� ���� ��� �ּҸ� �ӽ÷� ����
        free(curr);                        // ���� ��� �޸� ����
        curr = next;                       // �����Ϳ� ���� ����� �ּ� ����
    }

    free(head);    // �Ӹ� ��� �޸� ����
}