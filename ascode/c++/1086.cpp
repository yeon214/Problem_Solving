#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j < 2 * n; j++)
		{
			for (int h = 0; h < j / 2 + 1; h++)
			{
				printf("##");
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}