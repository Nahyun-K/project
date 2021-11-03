#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//피보나치 수열 : 재귀적 용법
int Fibonacci(int n);	//함수
int main(void)
{
	int n;
	int value;
	printf("### 피보나치 수열 ###\n");
	printf("몇 번째 수열까지 출력할까요: ");
	scanf("%d", &n);		//출력할 원소의 개수
	value = Fibonacci(n + 2);		//Fibonacci함수 호출
	return 0;

}
int Fibonacci(int n)
{
	int first = 1;		//피보나치 수열 첫번째 원소
	int second = 1;		//피보나치 수열 두번째 원소
	int third;
	int i;
	if (n <= 0)			//매개변수 n은 출력할 원소의 개수
	{
		printf("입력 값이 잘못되었습니다.\n");
		return 0;
	}
	if (n <= 2)
		return 1;

	for (i = 3; i <= n; ++i)
	{
		third = first + second;			// n + 2번째 값은 n번째 값과 (n + 1)번째 값을 더한 값
		printf("%10d", first);
		first = second;					// 다음번째의 계산을 위해 second값은 first값으로 바꿈
		second = third;					// 다음번째의 계산을 위해 third값은 second값으로 바꿈
		if (i % 5 == 2)					// 한줄에 5개씩 출력하기 위해서
			printf("\n");
			
	}
	return third;
}