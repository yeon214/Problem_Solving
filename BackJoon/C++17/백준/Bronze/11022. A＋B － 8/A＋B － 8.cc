#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int test;
	int a, b;
	scanf("%d", &test);
	for (int i = 1; i <= test; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
	}
	return 0;
}