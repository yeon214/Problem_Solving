#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int price;
		scanf("%d", &price);
		int day = 0;
		for (; price > 0; day++)
		{
			if ((day % 7) < 4)
			{
				price -= 36000;
			}
			else
			{
				price -= 60000;
			}
		}
		printf("%d\n", day);
	}

	return 0;
}