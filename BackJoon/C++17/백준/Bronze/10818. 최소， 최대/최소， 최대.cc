#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000000] = { 0 };
int main(void)
{
	int n;
	int max = -1000000, min = 1000000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	printf("%d %d", min, max);
	return 0;
}