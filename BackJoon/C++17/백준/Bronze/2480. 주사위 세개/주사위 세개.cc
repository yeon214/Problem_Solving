#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int big;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c)
	{
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b)
	{
		printf("%d", 1000 + a * 100);
	}
	else if (b == c)
	{
		printf("%d", 1000 + b * 100);
	}
	else if (a == c)
	{
		printf("%d", 1000 + a * 100);
	}
	else
	{
		big = a;
		if (b > big) big = b;
		if (c > big) big = c;
		printf("%d", big * 100);
	}


	return 0;

}