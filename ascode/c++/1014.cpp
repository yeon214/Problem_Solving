#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int a, b, c, d, e, f, g;
	unsigned int total;
	scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
	total = (a + b + c + d + e + f + g) / 7.0;
	printf("%d", total);
	return 0;
}