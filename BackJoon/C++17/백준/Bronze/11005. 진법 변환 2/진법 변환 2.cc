#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int arr[33] = { 0 };
	int b, check = 0;
	long long n;
	scanf("%lld %d", &n, &b);
	for (;n>1;check++)
	{
		arr[check] = n % b;
		n /= b;
	}
	if (n == 1)
	{
		arr[check] = 1;
		for (int i = check; i >= 0; i--)
		{
			if (arr[i] >= 10 && arr[i] <= 35)
			{
				printf("%c", arr[i] + 55);
			}
			else
			{
				printf("%d", arr[i]);
			}
		}
	}
	else
	{
		for (int i = check - 1; i >= 0; i--)
		{
			if (arr[i] >= 10 && arr[i] <= 35)
			{
				printf("%c", arr[i] + 55);
			}
			else
			{
				printf("%d", arr[i]);
			}
		}
	}
	return 0;
}