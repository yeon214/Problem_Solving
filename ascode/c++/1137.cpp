#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 1; i <= testcase; i++)
	{
		double a;
		char x, y;
		scanf("%lf %c%c", &a, &x, &y);
		if ((x == 'k') && (y == 'g'))
		{
			printf("%d %.4lf lb\n", i, a * (2.2046));
		}
		else if ((x == 'l') && (y == 'b'))
		{
			printf("%d %.4lf kg\n", i, a * (0.4536));
		}
		else if (x == 'l')
		{
			printf("%d %.4lf g\n", i, a * (0.2642));
		}
		else if (x == 'g')
		{
			printf("%d %.4lf l\n", i, a * (3.7854));
		}
	}

	return 0;
}