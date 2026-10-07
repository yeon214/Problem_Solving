#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int a, b;
		int gcd;
		scanf("%d %d", &a, &b);
		for (int j = 1; j <= a && j <= b; j++)
		{
			if (a % j == 0 && b % j == 0)
			{
				gcd = j;
			}
		}
		printf("%d\n", (a * b) / gcd);
	}

	
	return 0;
}