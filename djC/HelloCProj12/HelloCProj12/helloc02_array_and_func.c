//������ = �迭
//�迭�� �Ű������� �ϴ� ���
//int* Ȥ�� int[] �̷������� ���� ��
//�迭�� �Ű������� �� �Լ����� �ش� �迭��
//��ȭ�� �ָ� main�� �迭���� ���� �޴� �� Ȯ���غ���
//�迭�� �Ű������� �� �� �Ű������� �迭�� ���̵� ���� �Ѱ���� ��
//�ֳĸ� �Լ� �ȿ����� sizeof ����� pointer�� ũ���� 8byte�� ����

#include<stdio.h>
//void increase(int* a)
//void increase(int a[5])
void increase(int arr[], int size) //�� size�� �Ű������� �Ѱܾ� �ϴ� �� Ȯ���غ���
{
	printf("sizeof�� �� : %d\n", sizeof(arr));
	printf("sizeof�� �� : %d\n", sizeof(arr)/sizeof(int));
	for (int i = 0; i < size; i++)
		arr[i]++;
}
void printArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("[%d]��° �� : %d\n", i, arr[i]);
}
int main()
{
	int nums[] = { 10,20,30,40,50 };
	//����� �迭�� ����� ���ϴ� ����� ����
	//sizeof(int) : 4
	//sizeof(nums) : 20(4byte¥�� �����Ͱ� 5�� �����ϱ�)
	printf("%d\n", sizeof(nums));
	printf("%d\n", sizeof(nums) / sizeof(int));

	increase(nums, 5);
	printArr(nums, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", nums[i]);
	}

	return 0;
}