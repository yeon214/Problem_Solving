#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5] = { 0 };
	int a, count=0;
	scanf("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}	