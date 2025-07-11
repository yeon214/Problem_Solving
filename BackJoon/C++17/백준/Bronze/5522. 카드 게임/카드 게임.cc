#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0;
	int a;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	printf("%d", sum);
	return 0;
}	