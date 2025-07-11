#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[100] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int b;
	scanf("%d", &b);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b) count++;
	}
	printf("%d", count);

	return 0;
}