#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, c = 65;
		scanf("%d", &a);
		for (int j = 1; j <= a; j++)
		{
			for (int k = a - j; k > 0; k--)
			{
				printf(" ");
			}
			for (int k = 0; k < j; k++)
			{
				printf("%c", (char)(c + k));
			}
			for (int k = c + j - 2; k > 64; k--)
			{
				printf("%c", (char)k);
			}
			printf("\n");
		}

	}

	return 0;
}