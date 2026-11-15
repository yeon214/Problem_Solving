#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (;;)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if ((a == 0) && (b == 0) && (c == 0)) break;
		else if (a == 0) printf("NO!\n");
		else if (a != 0)
		{
			if ((b * b - 4 * a * c) > 0) printf("REAL\n");
			else if ((b * b - 4 * a * c) == 0) printf("MUL\n");
			else if ((b * b - 4 * a * c) < 0) printf("IMG\n");
		}
	}

	return 0;
}