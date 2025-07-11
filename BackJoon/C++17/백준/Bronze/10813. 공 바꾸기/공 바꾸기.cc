#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int arr[100] = { 0 };
	int n, m;
	int a, b, x = 0;
	scanf("%d %d", &n, &m);
	for (int j = 0; j <= n; j++)
	{
		arr[j] = j;
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &a, &b);
		x = arr[b];
		arr[b] = arr[a];
		arr[a] = x;
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}