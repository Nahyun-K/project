#include <stdio.h>
int HOUR(double dis, double velo);			//�� ��� �Լ�
int MINUTE(double dis, double velo);		//�� ��� �Լ�
double SECOND(double dis, double velo);		//�� ��� �Լ�
//�Ÿ� �� �ӷ� ���
int main(void) {
	double distance, velocity;	//����Ÿ�, �ӵ�
	printf("�Ÿ�(km) : ");
	scanf("%lf", &distance);	//����Ÿ� �Է�
	printf("�ӷ�(km) : ");
	scanf("%lf", &velocity);	//�ӵ� �Է�
	
	printf("�ɸ��� �ð� : %d�ð�  %d��  %.1f�� �ҿ�\n", HOUR(distance, velocity), MINUTE(distance, velocity), SECOND(distance, velocity));

	return 0;
}
int HOUR(double dis, double velo) {			//�� ��� �Լ�
	int hour = (int)(dis / velo);

	return hour;
}
int MINUTE(double dis, double velo) {		//�� ��� �Լ�
	int hour = (int)(dis / velo);
	int min = (int)(((dis / velo) - hour) * 60);

	return min;
}
double SECOND(double dis, double velo) {	//�� ��� �Լ�
	int hour, min;
	double sec;

	hour = (int)(dis / velo);
	min = (int)(((dis / velo) - hour) * 60);
	sec = (((((dis / velo) - hour) * 60) - min) * 60);

	return sec;
}