#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int a;
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			if ((j == 0) || (j == 1) || (j == a - 1))
			{
				for (int k = 0; k <= j; k++)
				{
					printf("*");
				}
			}
			else
			{
				for (int h = 0; h < a; h++)
				{
					if ((h == 0) || (h == j))
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
	}

	return 0;
}