#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	int a;
	for (;;)
	{
		int max = 0, min = 1001;
		scanf("%d", &t);
		if (t == 0)
		{
			break;
		}
		for (int i = 0; i < t; i++)
		{
			scanf("%d", &a);
			if (max < a)
			{
				max = a;
			}
			if (min > a)
			{
				min = a;
			}

		}
		if (max == min)
		{
			printf("Same\n");
		}
		else if ((max - min) % 3 == 0)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}



	return 0;
}