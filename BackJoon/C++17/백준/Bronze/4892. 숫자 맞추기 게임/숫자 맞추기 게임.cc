#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	for (int i = 1;;i++)
	{
		int a, odd = 0, even = 0;
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		else
		{
			a *= 3;
			if (a % 2 == 0)
			{
				a /= 2;
				even++;
			}
			else
			{
				a = (a + 1) / 2;
				odd++;
			}
			a *= 3;
			a /= 9;
			if (odd > 0)
			{
				printf("%d. odd %d\n", i, a);
			}
			else if (even > 0)
			{
				printf("%d. even %d\n", i, a);
			}
		}
	}
	return 0;
}	