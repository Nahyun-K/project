#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ģ ���� : �����ڿ� ���� ��� �Լ�
int main(void) {

	int a, b;
	char ch;
	printf("���� �Է�(�� : 10 + 20) : ");
	scanf("%d %c %d", &a, &ch, &b);
	printf("%d %c %d = %d", a, ch, b, calculate(a, b, ch));
	return 0;
}
int calculate(int x, int y, char z) {
	int res;			//�����
						//��Ģ ���� ����� �Էµ� ������ ������ ���� �ϳ��� �Լ����� �̷������
	if (z == '+')
		res = x + y;
	else if (z == '-')
		res = x - y;
	else if (z == '*')
		res = x * y;
	else if(z == '/')
	{
		if (y == 0)
			printf("Error : ������ �Է� ����!!!");	// '/' ������ �� �и� 0�̸� ERROR
		
		else
			res = x / y;
	}
	return res;
}