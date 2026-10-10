#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d, %d, %d", a, b, a * b / 2);
	return 0;
}