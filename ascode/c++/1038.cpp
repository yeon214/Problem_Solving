#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a, b;
	double total;
	scanf("%lf %lf", &a, &b);
	total = a * b / 2.0000000000;
	printf("%.10lf", total);

	return 0;
}