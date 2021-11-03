#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void BOX();
void PYRAMID();
#define SIZE 26			//알파벳 26글자
int main(void) {

	int num;
	printf("*********메		뉴*********\n");
	printf("1.알파벳 박스 모양 출력\n");
	printf("2. 알파벡 피라미드 모양 출력\n");
	printf("3. 프로그램 종료\n");
	printf("***************************\n");
	printf("메뉴선택 : ");
	scanf("%d", &num);

	if (num == 1) {
		BOX();			//BOX함수 호출
	}
	else if (num == 2) {
		PYRAMID();		//PYRAMID함수 호출
	}
	else
		printf("프로그램 종료....");

}
void BOX() {
	int i, j;
	char ch;
	for (i = 0; i < SIZE; i++) {			//첫번째 for문
		for (j = 0; j < SIZE; j++) {		//두번째 for문
			ch = 'A' + (i + j) % 26;				//문자 = A의 아스키 코드 + (i값과 j값을 더한 값을 26으로 나눈 나머지)
			printf("%2c", ch);		//크기 맞추기 위해 %2c
		}
		printf("\n");
	}
}
void PYRAMID() {
	int i, j;		//변수 i,j선언
	for (i = 0; i <= 26; i++)	//i는 0부터 26보다 작거나 같을 때까지 1씩 증가하는 반복문
	{
		for (j = 40 - i; j > 0; j--)//j는 40칸에서 i를 뺀값에서 시작하여 0보다 클 때까지 1씩 갑소하는 반복문
		{
			printf(" ");		//위의 반복문을 공백으로 출력
		}
		for (j = 0; j < i; j++)		//j는 0부터 i보다 작을 때까지 1씩 증가하는 반복문{
		{
			printf("%2c", 65 + j);			//65에 j가 더해지는 값을 아스키코드 값으로 출력
											//알파벳 사이사이에 한칸을 띄우기 위해 %2c로 표현
		}
		printf("\n");			//한줄 개행
	}

	return 0;
	
}