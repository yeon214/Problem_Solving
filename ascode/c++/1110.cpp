#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b * b - 4 * a * c > 0)
	{
		printf("1");
	}
	else if (b * b - 4 * a * c == 0)
	{
		printf("0");
	}
	else if (b * b - 4 * a * c < 0)
	{
		printf("-1");
	}
	return 0;
}