#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int a, b, x = 0, y = 0;
		int max = 0, min = 0;
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			x = a, y = b;
			b = x, a = y;
		}
		for (int j = a; j <= b; j++)
		{
			int count = 1;
			for (int k = j; ; count++)
			{
				if (k == 1) break;
				if (k % 2 == 1) k = k * 3 + 1;
				else k /= 2;
			}
			if ((max == 0) && (min == 0))
			{
				max = count;
				min = count;
			}
			else
			{
				if (max < count) max = count;
				else if (min > count) min = count;
			}
		}
		printf("%d %d\n", max, min);
	}

	return 0;
}