#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Max_SIze 10
void stuGrade(const double *pArr, int num, double *pSum, double *pAve, double *pMax);

int main() {
	double arr[Max_SIze] = { 0 };
	printf("%d 명의 학생 점수를 입력하시오.\n\n", Max_SIze);
	for (int i = 0; i < Max_SIze; i++) {			//10명의 학생 점수를 입력 받음
		printf("arr[%d] : ", i + 1);
		scanf("%lf", &arr[i]);
	}
	double sum;	
	double ave;
	double max;
	stuGrade(arr, Max_SIze, &sum, &ave, &max);			//stuGrade함수 호출
	printf("총점 : %.2f, 평균 : %.2f, 최대값 : %.2f", sum, ave, max);
	return 0;
}
void stuGrade(const double *pArr, int num, double *pSum, double *pAve, double *pMax) {
	*pSum = 0;				// 0 초기화
	for (int i = 0; i < num; i++) {
		*pSum = *pSum + pArr[i];			// 합계
		if (*pMax < *(pArr + i))			// 가장 큰 값 구하기
			*pMax = *(pArr + i);
	}
	*pAve = *pSum / num;					// 평균 구하기
}

