#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, factor, multiple;
	for (;;)
	{
		factor=0, multiple=0;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		if (a % b == 0) multiple++;
		else if (b%a==0) factor++;
		if (factor) printf("factor\n");
		else if (multiple) printf("multiple\n");
		else printf("neither\n");
	}

	return 0;
}