#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double arr[1000];
	int n;
	double max = 0.0, sum = 0.0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
		
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = (double)arr[i] / max * 100.0;
		sum += arr[i];
	}
	printf("%lf", sum/n);

	return 0;
}