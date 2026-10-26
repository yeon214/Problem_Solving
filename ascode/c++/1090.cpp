#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	int c = 64;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a;
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			for (int k = a - 1 - j; k > 0; k--)
			{
				printf(" ");
			}
			for (int k = c + a; k > a + c - 1 - j; k--)
			{
				printf("%c", (char)k);
			}
			for (int k = a + c + 1 - j; k < a + c + 1; k++)
			{
				printf("%c", (char)k);
			}
			printf("\n");
		}
		for (int j = 1; j <= a - 1; j++)
		{
			for (int k = 0; k < j; k++)
			{
				printf(" ");
			}
			for (int k = a + c; k > c + j; k--)
			{
				printf("%c", (char)k);
			}
			for (int k = 66 + j; k <= a + c; k++)
			{
				printf("%c", (char)k);
			}
			printf("\n");
		}
	}
	return 0;
}