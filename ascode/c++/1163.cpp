#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int testcase;
	int a, b;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		int x = 0, y = 0;
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &b);
			if (b > 0) x++;
			else if (b < 0) y++;
		}
		printf("%d %d\n", y, x);
	}

	return 0;
}