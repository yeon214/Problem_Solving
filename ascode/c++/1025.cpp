#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	double total;

	scanf("%d %d", &a, &b);

	total = a * b / 2.0;

	printf("%.1lf", total);

	return 0;
}