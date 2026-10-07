#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int arr[1000] = { 0 };
		int n, count = 0;
		double sum = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		sum /= n;
		for (int j = 0; j < n; j++)
		{
			if (sum < arr[j])
			{
				count++;
			}
		}
		printf("%.3lf%\n", (100.0*count) / (double)n);
	}
	return 0;
}