#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Ǻ���ġ ���� : ����� ���
int Fibonacci(int n);	//�Լ�
int main(void)
{
	int n;
	int value;
	printf("### �Ǻ���ġ ���� ###\n");
	printf("�� ��° �������� ����ұ��: ");
	scanf("%d", &n);		//����� ������ ����
	value = Fibonacci(n + 2);		//Fibonacci�Լ� ȣ��
	return 0;

}
int Fibonacci(int n)
{
	int first = 1;		//�Ǻ���ġ ���� ù��° ����
	int second = 1;		//�Ǻ���ġ ���� �ι�° ����
	int third;
	int i;
	if (n <= 0)			//�Ű����� n�� ����� ������ ����
	{
		printf("�Է� ���� �߸��Ǿ����ϴ�.\n");
		return 0;
	}
	if (n <= 2)
		return 1;

	for (i = 3; i <= n; ++i)
	{
		third = first + second;			// n + 2��° ���� n��° ���� (n + 1)��° ���� ���� ��
		printf("%10d", first);
		first = second;					// ������°�� ����� ���� second���� first������ �ٲ�
		second = third;					// ������°�� ����� ���� third���� second������ �ٲ�
		if (i % 5 == 2)					// ���ٿ� 5���� ����ϱ� ���ؼ�
			printf("\n");
			
	}
	return third;
}