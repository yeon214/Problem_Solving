#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int price;
		int hour = 9000;
		int day = 0;
		scanf("%d", &price);
		for (; price > 0; day++)
		{
			if ((day != 0) && (day % 7 == 0))
			{
				hour += 200;
			}
			price -= hour * 7;
		}
		printf("%d\n", day);
	}

	return 0;
}