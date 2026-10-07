#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, count = 1, change = 1, multi = 1;
	scanf("%d", &n);
	for (; n > change;)
	{
		count++;
		change += 6 * multi;
		multi++;
	}
	printf("%d", count);
	return 0;
}