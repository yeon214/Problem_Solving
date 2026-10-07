#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[3]={0}, temp = 0;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
}	