#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int d;
	double total;
	scanf("%d", &d);
	total = (d / 2.0) * (d / 2.0) * 3.14159265358979;
	printf("%.5lf", total);

	return 0;
}