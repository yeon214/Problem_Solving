#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	while (a--)
	{
		int x;
		scanf("%d", &x);
		printf("%d\n", x);
	}
	return 0;
}