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
		printf("Pairs for %d: ", a);
		for (int j = 1; j <= a / 2; j++)
		{
            if (2*j != a)
			{
				if (j == 1)
				{
					printf("%d %d", j, a - j);
				}
				else if (j > 1)
				{
					printf(", %d %d", j, a - j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}	