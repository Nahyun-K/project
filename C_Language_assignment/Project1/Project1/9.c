#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Max_SIze 10
void stuGrade(const double *pArr, int num, double *pSum, double *pAve, double *pMax);

int main() {
	double arr[Max_SIze] = { 0 };
	printf("%d ���� �л� ������ �Է��Ͻÿ�.\n\n", Max_SIze);
	for (int i = 0; i < Max_SIze; i++) {			//10���� �л� ������ �Է� ����
		printf("arr[%d] : ", i + 1);
		scanf("%lf", &arr[i]);
	}
	double sum;	
	double ave;
	double max;
	stuGrade(arr, Max_SIze, &sum, &ave, &max);			//stuGrade�Լ� ȣ��
	printf("���� : %.2f, ��� : %.2f, �ִ밪 : %.2f", sum, ave, max);
	return 0;
}
void stuGrade(const double *pArr, int num, double *pSum, double *pAve, double *pMax) {
	*pSum = 0;				// 0 �ʱ�ȭ
	for (int i = 0; i < num; i++) {
		*pSum = *pSum + pArr[i];			// �հ�
		if (*pMax < *(pArr + i))			// ���� ū �� ���ϱ�
			*pMax = *(pArr + i);
	}
	*pAve = *pSum / num;					// ��� ���ϱ�
}

