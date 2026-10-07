#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int arra[100][100] = { 0 };
	int arrb[100][100] = { 0 };
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arra[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arrb[i][j]);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arra[i][j]+arrb[i][j]);
		}
		printf("\n");
	}
	return 0;
}