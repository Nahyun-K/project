#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 1000
void stringConvert(const char *fromString, char *toString);
int main(void)
{
	char string[MAX_SIZE], change[MAX_SIZE];//�迭 ����
	printf("���ڿ� ��� : ");
	gets(string);								//��ȯ�ϰ� ���� ���ڿ� �Է� ����
	stringConvert(&string, &change);				//stringConvert�Լ� ȣ��
	printf("��ȯ�� ���ڿ�: %s\n", change);
	return 0;

}
void stringConvert(const char *fromString, char *toString)
{
	for (char c; (c = *fromString) != 0; fromString++, toString++)
	{
		if ('a' <= c && c <= 'z')
			*toString = c + 'A' - 'a';		//�ƽ�Ű�ڵ� �빮�� �ҹ��� ���� 32 ���� �ҹ��� -> �빮��

		else if ('A' <= c && c <= 'Z')
			*toString = c + 'a' - 'A';		//32 ������ �빮�� -> �ҹ���
		else
			*toString = *fromString;			//�״��
	}
	*toString = 0;
}