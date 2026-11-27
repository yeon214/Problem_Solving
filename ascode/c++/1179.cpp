#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 10 == 3 || i / 10 == 3)
		{
			printf("%d ", i);
		}

	}

	return 0;
}