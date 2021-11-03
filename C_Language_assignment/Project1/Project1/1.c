#include <stdio.h>
int HOUR(double dis, double velo);			//시 계산 함수
int MINUTE(double dis, double velo);		//분 계산 함수
double SECOND(double dis, double velo);		//초 계산 함수
//거리 및 속력 계산
int main(void) {
	double distance, velocity;	//주행거리, 속도
	printf("거리(km) : ");
	scanf("%lf", &distance);	//주행거리 입력
	printf("속력(km) : ");
	scanf("%lf", &velocity);	//속도 입력
	
	printf("걸리는 시간 : %d시간  %d분  %.1f초 소요\n", HOUR(distance, velocity), MINUTE(distance, velocity), SECOND(distance, velocity));

	return 0;
}
int HOUR(double dis, double velo) {			//시 계산 함수
	int hour = (int)(dis / velo);

	return hour;
}
int MINUTE(double dis, double velo) {		//분 계산 함수
	int hour = (int)(dis / velo);
	int min = (int)(((dis / velo) - hour) * 60);

	return min;
}
double SECOND(double dis, double velo) {	//초 계산 함수
	int hour, min;
	double sec;

	hour = (int)(dis / velo);
	min = (int)(((dis / velo) - hour) * 60);
	sec = (((((dis / velo) - hour) * 60) - min) * 60);

	return sec;
}