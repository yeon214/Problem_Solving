#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n, m = 1, count = 0;
		scanf("%d", &n);
		if (n == 1)
		{
			printf("1 0\n");
		}
		else
		{
			for (;;)
			{
				if (n % 2 == 1)
				{
					n = 3 * n + 1;
				}
				else
				{
					n /= 2;
					count++;
				}
				m++;
				if (n <= 1)
				{
					break;
				}
			}
			printf("%d %d\n", m, count);
		}
	}
	return 0;
}