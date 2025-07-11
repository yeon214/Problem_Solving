#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main(void)
{
	int n, a, m, arr[100], b, c, price, result = 0;
	scanf("%d %d", &n, &m);
	for (a = 0; a < n; a++)
	{
		scanf("%d", &arr[a]);
	}
	sort(arr, arr + n);
	for (a = 0; a < n-2; a++)
	{
		for (b = a+1; b < n-1; b++)
		{
			for (c = b+1; c < n; c++)
			{
				price = arr[a] + arr[b] + arr[c];
				if (price <= m)
				{
					if (price - result > 0) result = price;
				}
			}
		}
	}
	printf("%d", result);
	return 0;
}