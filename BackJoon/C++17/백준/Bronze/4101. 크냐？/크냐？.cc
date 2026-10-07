#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (;;)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if ((a == 0) && (b == 0))
		{
			break;
		}
		else
		{
			if (a > b)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
}	