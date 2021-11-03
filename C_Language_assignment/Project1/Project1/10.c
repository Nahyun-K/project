#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 1000
void stringConvert(const char *fromString, char *toString);
int main(void)
{
	char string[MAX_SIZE], change[MAX_SIZE];//배열 선언
	printf("문자열 출력 : ");
	gets(string);								//변환하고 싶은 문자열 입력 받음
	stringConvert(&string, &change);				//stringConvert함수 호출
	printf("변환된 문자열: %s\n", change);
	return 0;

}
void stringConvert(const char *fromString, char *toString)
{
	for (char c; (c = *fromString) != 0; fromString++, toString++)
	{
		if ('a' <= c && c <= 'z')
			*toString = c + 'A' - 'a';		//아스키코드 대문자 소문자 차이 32 빼줌 소문자 -> 대문자

		else if ('A' <= c && c <= 'Z')
			*toString = c + 'a' - 'A';		//32 더해줌 대문자 -> 소문자
		else
			*toString = *fromString;			//그대로
	}
	*toString = 0;
}