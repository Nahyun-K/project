#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void BOX();
void PYRAMID();
#define SIZE 26			//���ĺ� 26����
int main(void) {

	int num;
	printf("*********��		��*********\n");
	printf("1.���ĺ� �ڽ� ��� ���\n");
	printf("2. ���ĺ� �Ƕ�̵� ��� ���\n");
	printf("3. ���α׷� ����\n");
	printf("***************************\n");
	printf("�޴����� : ");
	scanf("%d", &num);

	if (num == 1) {
		BOX();			//BOX�Լ� ȣ��
	}
	else if (num == 2) {
		PYRAMID();		//PYRAMID�Լ� ȣ��
	}
	else
		printf("���α׷� ����....");

}
void BOX() {
	int i, j;
	char ch;
	for (i = 0; i < SIZE; i++) {			//ù��° for��
		for (j = 0; j < SIZE; j++) {		//�ι�° for��
			ch = 'A' + (i + j) % 26;				//���� = A�� �ƽ�Ű �ڵ� + (i���� j���� ���� ���� 26���� ���� ������)
			printf("%2c", ch);		//ũ�� ���߱� ���� %2c
		}
		printf("\n");
	}
}
void PYRAMID() {
	int i, j;		//���� i,j����
	for (i = 0; i <= 26; i++)	//i�� 0���� 26���� �۰ų� ���� ������ 1�� �����ϴ� �ݺ���
	{
		for (j = 40 - i; j > 0; j--)//j�� 40ĭ���� i�� �������� �����Ͽ� 0���� Ŭ ������ 1�� �����ϴ� �ݺ���
		{
			printf(" ");		//���� �ݺ����� �������� ���
		}
		for (j = 0; j < i; j++)		//j�� 0���� i���� ���� ������ 1�� �����ϴ� �ݺ���{
		{
			printf("%2c", 65 + j);			//65�� j�� �������� ���� �ƽ�Ű�ڵ� ������ ���
											//���ĺ� ���̻��̿� ��ĭ�� ���� ���� %2c�� ǥ��
		}
		printf("\n");			//���� ����
	}

	return 0;
	
}