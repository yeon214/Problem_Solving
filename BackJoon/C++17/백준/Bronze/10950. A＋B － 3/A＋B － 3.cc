#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int a;
	int x, y;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}

	return 0;
}