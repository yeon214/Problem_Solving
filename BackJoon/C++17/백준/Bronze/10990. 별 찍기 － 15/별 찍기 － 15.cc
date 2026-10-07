#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = n-1-i; j > 0; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2*i+1; j++)
		{
			if ((j == 0) || (j == 2 * i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}