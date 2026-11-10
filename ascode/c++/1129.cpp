#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		double a;
		char x, y;
		scanf("%lf %c%c", &a, &x, &y);
		if ((x == 'm') && (y == 'm')) printf("%d\n", (int)a);
		else if ((x == 'c') && (y == 'm')) printf("%d\n", (int)(a * 10));
		else if (x == 'm') printf("%d\n", (int)(a * 1000));
		else if ((x == 'k') && (y == 'm')) printf("%d\n", (int)(a * 1000000));
	}

	return 0;
}