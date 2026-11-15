#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 1; i <= testcase; i++)
	{
		int a, b;
		int max = 0, min = 0;
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &b);
			if ((max == 0) && (min == 0))
			{
				max = b, min = b;
			}
			else
			{
				if (max < b) max = b;
				else if (min > b) min = b;
			}
		}
		printf("%d %d %d\n", max, min, max - min);
	}

	return 0;
}