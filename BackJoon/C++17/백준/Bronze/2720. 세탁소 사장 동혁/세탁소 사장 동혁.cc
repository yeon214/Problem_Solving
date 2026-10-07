#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int c, arr[4] = { 0 };
		scanf("%d", &c);
		for (; c > 0;)
		{
			if (c >= 25)
			{
				for (; c >= 25;arr[0]++)
				{
					c -= 25;
				}
			}
			else if (c >= 10)
			{
				for (; c >= 10; arr[1]++)
				{
					c -= 10;
				}
			}
			else if (c >= 5)
			{
				for (; c >= 5; arr[2]++)
				{
					c -= 5;
				}
			}
			else if (c >= 1)
			{
				for (; c >= 1; arr[3]++)
				{
					c -= 1;
				}
			}
		}
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
	return 0;
}