#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//사용자로부터 년도를 입력 받아서, 윤년인지 아닌지를 판단하는 프로그램을 작성하시오.
//단, 이중 선택(if-else_구조를 이용하여 작성하시오.
int main(void)
{
	int year;
		printf("년도 입력 : ");

		scanf("%d", &year);
		//첫번째 if-else문
		if ((year % 4 == 0) && (year % 100 != 0))	//4로 나누어 떨어지는 해 && 그 중에서 100으로 나누어지지 않는 해
			printf("%d년은 윤년입니다.\n", year);
		else
		{
			//두번째 if-else문
			if (year % 400 == 0)	//다만 400으로 나누어 떨어지는 해는 다시 윤년
				printf("%d년은 윤년입니다.\n", year);		//이중 선택
			else
				printf("%d년은 평년입니다.\n", year);	//그 외의 해는 평년
		}
	return 0;
}
