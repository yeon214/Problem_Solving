#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1 - i; j > 0; j--)
		{
			printf(" ");
		}
		if ((i == 0) || (i == n - 1))
		{
			for (int k = 0; k <= 2 * i; k++)
			{
				printf("*");
			}
		}
		else
		{
			for (int k = 0; k <= 2 * i; k++)
			{
				if ((k == 0) || (k == 2 * i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	

	return 0;
}