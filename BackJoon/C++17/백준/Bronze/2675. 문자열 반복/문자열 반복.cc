#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		char arr[21] = { 0 };
		scanf("%d %s", &n, arr);
		int lenArr = strlen(arr);
		for (int j = 0; j < lenArr; j++)
		{
			for (int k = 0; k < n; k++)
			{
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}
	return 0;
}