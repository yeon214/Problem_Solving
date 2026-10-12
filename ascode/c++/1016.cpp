#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	// 속도 = a 시간 = b
	scanf("%lf %lf", &a, &b);
	printf("%.3lf %.3lf %.2lf", a, b, a * b);

	return 0;
}