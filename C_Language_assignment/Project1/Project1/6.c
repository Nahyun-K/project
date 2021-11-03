#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	int temp_hi, temp_low, hi, low;
	int temp_binary[32];

	printf("임의의 정수 입력 : ");
	scanf("%d", &num);


	for (i = 0; i < 32; i++)     // 맨 끝의 비트만 계산 후 저장
		temp_binary[i] = (num >> i) & 1;
		
	for (i = 31; i >= 0; i--)     // 배열에는 역으로 저장되었기 때문에 역으로 출력
	{
		printf("%d", temp_binary[i]);			//역 출력
		if (i % 4 ==0)
			printf(" ");
	}

	return 0;
}



