#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < a; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	}


	return 0;
}