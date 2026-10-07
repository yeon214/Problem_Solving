#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int n, arr[100][100] = { 0 }, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		for (int j = x - 1; j < x+9; j++)
		{
			for (int k = y - 1; k < y+ 9; k++)
			{
				arr[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i][j] == 1)
			{
				count++;
			}
		}
	}
	printf("%d", count);
	return 0;
}