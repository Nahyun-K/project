#include <stdio.h>
int positional(int n);
//���ڵ��� ������ ���� ���
//����ڷκ��� ������ ������ �Է� �޾Ƽ�, �ڸ� ���� �� �ڸ� ������
//���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
int main(void) {

	int num;
	printf("������ ���� �Է� : ");
	scanf("%d", &num);
	printf("%d : %d�ڸ� ����\n", num, positional(num));
	printf("�� �ڸ��� ���� : %d", SUM(num));

	return 0;
}
int change(int k) {

	if (k = 0) {			//������ ���� 0�̸� 0 ��ȯ
		return 0;
	}
	else if (k < 0) {		//������ ���� 0�̸�
		return reverse(k);	//�Լ� reverse���� ���� ������ ��ȯ
	}
	else
		return k;			//������ ���� ����̸� �״�� ��ȯ
}
int reverse(int num) {//���� ���� �� ����� ��ȯ
	int num2;
	num2 = ~num + 1;
	return num2;
}
int positional(int n) {	//�ڸ� �� ���ϱ�
	int sum = 1;
	while (1) {
		n = n / 10;
		if (n < 1)
			break;
		else
			sum++;
	}
	return sum;
}
int SUM(int n) {
	int s;
	int sum2 = 0;
	while (1) {
		s = n % 10;		//�� �ڸ��� ��� ���� �ڸ��� ó��
		n = n / 10;		//���� �ڸ��� ó���ϱ� ���� ������
		if (n < 1) {	//n�� ���� 1���� ���� �� while���� ������
			sum2 += s;	//���� ���� �ڸ��� ���� ���Ѵ�
			break;
		}
		else
			sum2 += s;
	
	}
	return sum2;

}