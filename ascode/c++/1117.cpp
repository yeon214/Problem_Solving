#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[3][3] = { 0 };
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int x;
		scanf("%d", &x);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (x == arr[i][j])
				{
					arr[i][j] = 0;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((arr[i][0] == 0) && (arr[i][1] == 0) && (arr[i][2] == 0))
		{
			count++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if ((arr[0][i] == 0) && (arr[1][i] == 0) && (arr[2][i] == 0))
		{
			count++;
		}
	}
	if ((arr[0][0] == 0) && (arr[1][1] == 0) && (arr[2][2] == 0))
	{
		count++;
	}
	if ((arr[0][2] == 0) && (arr[1][1] == 0) && (arr[2][0] == 0))
	{
		count++;
	}
	printf("%d", count);

	return 0;
}