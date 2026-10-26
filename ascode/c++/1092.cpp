#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	for (;;)
	{
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if ((a == 0) && (b == 0) && (c == 0) && (d == 0)) break;
		else if ((a * d) + (b * c) == 0) printf("Real\n");
		else if ((a * c) - (b * d) == 0) printf("Imaginary\n");
		else printf("Complex\n");

	}
	return 0;
}