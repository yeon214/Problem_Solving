#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a, b, c=0;
	scanf("%d %d", &a, &b);
	c = b - a + b;
	printf("%d", c);

	return 0;
}