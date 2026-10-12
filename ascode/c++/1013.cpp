#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int testcase;
	int a;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		a = ((a % 10000000) % 1000000) / 10000;
		printf("%02d\n", a);
	}

	return 0;
}