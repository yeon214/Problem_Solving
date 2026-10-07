#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, a, real = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		int count = 0;
		for (int j = 1; j <= a; j++)
		{
			if (a % j == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			real++;
		}
	}
	printf("%d", real);
	return 0;
}