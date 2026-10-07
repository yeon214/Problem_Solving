#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	long long sum = 0, num_2 = 0, num_1 = 0, arr[90] = { 1,1 };
	scanf("%d", &n);
	if (n == 1) printf("1");
	else if (n == 2) printf("1");
	else
	{
		for (int i = 3; i <= n; i++)
		{
			num_2 = arr[i - 3];
			num_1 = arr[i - 2];
			sum = num_2 + num_1;
			arr[i - 1] = sum;
		}
		printf("%lld", sum);
	}
	return 0;
}