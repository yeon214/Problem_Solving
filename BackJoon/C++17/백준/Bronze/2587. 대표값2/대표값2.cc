#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[5] = { 0 };
	double average = 0.0;
	int temp = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		average += arr[i];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	average /= 5.0;
	printf("%d\n", (int)average);
	printf("%d\n", arr[2]);

	return 0;
}