#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[101] = { 0 };
	int n, count1 =0, count0=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 1)
		{
			count1++;
		}
		else if (arr[i]==0)
		{
			count0++;
		}
	}
	if (count1 > count0)
	{
		printf("Junhee is cute!");
	}
	else if (count1 < count0)
	{
		printf("Junhee is not cute!");
	}
}	