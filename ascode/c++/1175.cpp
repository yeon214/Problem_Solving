#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		if (i % 7 == 0)
		{
			sum += i;
		}

	}
	printf("%d", sum);

	return 0;
}