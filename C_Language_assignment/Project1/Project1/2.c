#include <stdio.h>
int reverse(int num);	
//양의 정수 또는 음의 정수 값 변환
//비트 단위 연산자 : & | ^ ~중 ~사용
int main(void) {

	int n;
	printf("임의의 정수 값을 입력 : ");
	scanf("%d", &n);

	printf("변환된 값 : %d", reverse(n));

	return 0;
}
int reverse(int num) {

	int num2;
	num2 = ~num + 1;	//비트 단위 연산자 ~ 사용
	return num2;

}