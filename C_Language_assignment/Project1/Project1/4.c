#include <stdio.h>
int positional(int n);
//숫자들의 개수와 합을 출력
//사용자로부터 임의의 정수를 입력 받아서, 자리 수와 각 자리 총합을
//구하여 출력하는 프로그램을 작성하시오
int main(void) {

	int num;
	printf("임의의 정수 입력 : ");
	scanf("%d", &num);
	printf("%d : %d자리 정수\n", num, positional(num));
	printf("각 자리의 총합 : %d", SUM(num));

	return 0;
}
int change(int k) {

	if (k = 0) {			//임의의 값이 0이면 0 반환
		return 0;
	}
	else if (k < 0) {		//임의의 값이 0이면
		return reverse(k);	//함수 reverse에서 양의 정수로 변환
	}
	else
		return k;			//임의의 값이 양수이면 그대로 반환
}
int reverse(int num) {//음의 정수 값 양수로 변환
	int num2;
	num2 = ~num + 1;
	return num2;
}
int positional(int n) {	//자리 수 구하기
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
		s = n % 10;		//각 자리를 모두 일의 자리로 처리
		n = n / 10;		//일의 자리로 처리하기 위해 나눈다
		if (n < 1) {	//n의 값이 1보다 작을 때 while문을 끝낸다
			sum2 += s;	//가장 높은 자리의 수를 더한다
			break;
		}
		else
			sum2 += s;
	
	}
	return sum2;

}