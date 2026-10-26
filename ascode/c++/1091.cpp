#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (;;)
	{
		int n, a;
		scanf("%d", &n);
		if (n == 0)
		{
			break;
		}
		else
		{
			int sum = 0, x = 0;
			for (int i = 0; i < n; i++)
			{
				scanf("%d", &a);
				if (a > 0 && a < 101)
				{
					sum += a;
					x++;
				}
			}
			printf("%.2lf\n", sum / (double)x);
		}
	}

	return 0;
}