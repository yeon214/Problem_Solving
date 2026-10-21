#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a;
		scanf("%d", &a);
		for (int j = 1; j <= a; j++)
		{
			for (int k = a - j; k > 0; k--)
			{
				printf(" ");
			}
			for (int k = 1; k < 2 * j; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (int j = a - 1; j > 0; j--)
		{
			for (int k = 0; k < a - j; k++)
			{
				printf(" ");
			}
			for (int k = 2 * j - 1; k > 0; k--)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}