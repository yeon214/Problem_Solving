#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t, c = 65;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int s, n;
		scanf("%d %d", &s, &n);
		if (s % 2 == 1)
		{
			s++;
		}
		if (s < 2 * n)
		{
			printf("No DAP!\n");
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < j; k++)
				{
					printf(" ");
				}
				for (int k = s - 1; k >= j; k--)
				{
					printf("%c", (char)(k + c - j));
				}
				for (int k = 1; k <= s - 1 - j; k++)
				{
					printf("%c", (char)(c + k));
				}
				printf("\n");
			}
			for (int j = 0; j < s - 2 * n; j++)
			{
				for (int k = 0; k < j + n; k++)
				{
					printf(" ");
				}
				for (int k = c + s - 1 - n - j; k > c + s - 2 * n - 1 - j; k--)
				{
					printf("%c", (char)k);
				}
				for (int k = (s - 2 * n) * 2 - 1 - 2 * j; k > 0; k--)
				{
					printf(" ");
				}
				for (int k = c + s - 2 * n - j; k < c + s - n - j; k++)
				{
					printf("%c", (char)(k));
				}
				printf("\n");
			}
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < s - n + j; k++)
				{
					printf(" ");
				}
				for (int k = 0; k < n - j; k++)
				{
					printf("%c", (char)(c - k + n - 1 - j));
				}
				for (int k = 0; k < n - 1 - j; k++)
				{
					printf("%c", (char)(k + c + 1));
				}
				printf("\n");
			}
			printf("\n");
		}

	}
	return 0;
}