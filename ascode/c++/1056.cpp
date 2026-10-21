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
		for (int j = 0; j < a; j++)
		{
			for (int k = 0; k < j; k++)
			{
				printf(" ");
			}
			for (int h = 0; h < a - j; h++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;

}