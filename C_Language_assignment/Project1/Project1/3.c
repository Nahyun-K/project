#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����ڷκ��� �⵵�� �Է� �޾Ƽ�, �������� �ƴ����� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
//��, ���� ����(if-else_������ �̿��Ͽ� �ۼ��Ͻÿ�.
int main(void)
{
	int year;
		printf("�⵵ �Է� : ");

		scanf("%d", &year);
		//ù��° if-else��
		if ((year % 4 == 0) && (year % 100 != 0))	//4�� ������ �������� �� && �� �߿��� 100���� ���������� �ʴ� ��
			printf("%d���� �����Դϴ�.\n", year);
		else
		{
			//�ι�° if-else��
			if (year % 400 == 0)	//�ٸ� 400���� ������ �������� �ش� �ٽ� ����
				printf("%d���� �����Դϴ�.\n", year);		//���� ����
			else
				printf("%d���� ����Դϴ�.\n", year);	//�� ���� �ش� ���
		}
	return 0;
}
