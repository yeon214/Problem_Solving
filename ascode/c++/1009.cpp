#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	char a;
	for (int i = 0; i < testcase; i++)
	{
		scanf(" %c", &a);
		printf("%c\n", a ^ 32);
	}

	return 0;
}