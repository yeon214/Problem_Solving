#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5] = { 0 }, sum =0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < 40)
		{
			arr[i] = 40;
		}
		sum += arr[i];
	}
	sum /= 5;
	printf("%d", sum);
	return 0;
}