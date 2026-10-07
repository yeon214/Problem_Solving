#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int n, multi = 1, one = 2;
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
		multi = 1;
		for (int i = 0; i < n - 1-j; i++)
		{
			multi *= 2;
		}
		one += multi;
	}
	printf("%d", one * one);
	return 0;
}