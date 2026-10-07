#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int arr[10] = { 0 };
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}
	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == arr[i])
			{
				count++;
			}
		}
		if (count == 0)
		{
			result++;
		}
	}
	printf("%d", result);

	return 0;
}