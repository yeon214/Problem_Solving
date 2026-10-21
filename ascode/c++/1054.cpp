#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		for (int j = 0; j < b; j++)
		{
			if ((j == 0) || (j == (b - 1)))
			{
				for (int k = 0; k < a; k++)
				{
					printf("*");
				}
				printf("\n");
			}
			else
			{
				for (int p = 0; p < a; p++)
				{
					if ((p == 0) || (p == (a - 1)))
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
		}
	}

	return 0;
}