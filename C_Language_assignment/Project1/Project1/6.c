#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	int temp_hi, temp_low, hi, low;
	int temp_binary[32];

	printf("������ ���� �Է� : ");
	scanf("%d", &num);


	for (i = 0; i < 32; i++)     // �� ���� ��Ʈ�� ��� �� ����
		temp_binary[i] = (num >> i) & 1;
		
	for (i = 31; i >= 0; i--)     // �迭���� ������ ����Ǿ��� ������ ������ ���
	{
		printf("%d", temp_binary[i]);			//�� ���
		if (i % 4 ==0)
			printf(" ");
	}

	return 0;
}



