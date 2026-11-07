#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, b, count = 0;
		int arr[100] = { 0 };
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &arr[j]);
		}
		scanf("%d", &b);
		for (int j = 0; j < a; j++)
		{
			if (b == arr[j])
			{
				count++;
			}
		}
		if (count > 0)
		{
			printf("%d\n", count);
		}
		else
		{
			printf("None\n");
		}
	}

	return 0;
}