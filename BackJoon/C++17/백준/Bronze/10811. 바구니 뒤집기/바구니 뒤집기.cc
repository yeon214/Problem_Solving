#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int arr[100] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		arr[i] = i+1;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b, x =0;
		scanf("%d %d", &a, &b);
		for (int j = 0; j <= (b-a)/2; j++)
		{
			x = arr[a - 1 + j];
			arr[a - 1 +j] = arr[b-1-j];
			arr[b - 1 - j] = x;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}