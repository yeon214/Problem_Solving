#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int a, arr[100] = { 0 }, temp = 0;
		int count = 0;
		scanf("%d", &a);
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (int j = 0; j < a; j++)
		{
			if ((arr[j] < 0) || (arr[j] % 2 == 0))
			{
				arr[j] = 0;
			}
		}
		for (int j = 0; j < a - 1; j++)
		{
			for (int k = 0; k < a - 1 - j; k++)
			{
				if (arr[k] < arr[k + 1])
				{
					temp = arr[k];
					arr[k] = arr[k + 1];
					arr[k + 1] = temp;
				}
			}
		}
		for (int j = 0; j < a; j++)
		{
			if (arr[j] != 0)
			{
				printf("%d ", arr[j]);
			}
			else if (arr[j] == 0)
			{
				count++;
			}
			if (count == a)
			{
				printf("None");
			}
		}
		printf("\n");
	}
	return 0;
}