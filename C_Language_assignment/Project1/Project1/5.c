#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//사칙 연산 : 연산자에 따른 계산 함수
int main(void) {

	int a, b;
	char ch;
	printf("수식 입력(예 : 10 + 20) : ");
	scanf("%d %c %d", &a, &ch, &b);
	printf("%d %c %d = %d", a, ch, b, calculate(a, b, ch));
	return 0;
}
int calculate(int x, int y, char z) {
	int res;			//결과값
						//사칙 연산 계산은 입력된 연산자 종류에 따라 하나의 함수에서 이루어진다
	if (z == '+')
		res = x + y;
	else if (z == '-')
		res = x - y;
	else if (z == '*')
		res = x * y;
	else if(z == '/')
	{
		if (y == 0)
			printf("Error : 나눗셈 입력 오류!!!");	// '/' 연산자 시 분모가 0이면 ERROR
		
		else
			res = x / y;
	}
	return res;
}