#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[9] = { 0 };
	int max = 0, maxi = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		if (max == 0)
		{
			max = a[0], maxi = i;
		}
		else
		{
			if (max < a[i])
			{
				max = a[i];
				maxi = i;
			}
		}
	}
	printf("%d\n", max);
	printf("%d\n", maxi+1);
	return 0;
}