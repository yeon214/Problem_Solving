#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	double total;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	total = (a + b + c + d + e + f) / 6.0000;
	printf("%.4lf", total);

	return 0;
}