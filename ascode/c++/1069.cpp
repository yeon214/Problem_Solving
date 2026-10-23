#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a;
		unsigned long long total = 1;
		scanf("%d", &a);
		for (int i = 1; i <= a; i++)
		{
			total *= i;
		}
		printf("%llu\n", total);

	}

	return 0;
}