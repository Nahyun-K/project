#include <stdio.h>
int reverse(int num);	
//���� ���� �Ǵ� ���� ���� �� ��ȯ
//��Ʈ ���� ������ : & | ^ ~�� ~���
int main(void) {

	int n;
	printf("������ ���� ���� �Է� : ");
	scanf("%d", &n);

	printf("��ȯ�� �� : %d", reverse(n));

	return 0;
}
int reverse(int num) {

	int num2;
	num2 = ~num + 1;	//��Ʈ ���� ������ ~ ���
	return num2;

}