#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int testcase;
	int a, b;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}