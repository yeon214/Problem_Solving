#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;
	for (; scanf("%c", &c) != EOF;)
	{
		printf("%c", c);
	}
	printf("\n");
	return 0;
}