#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arra[3] = { 0 }, arrb[2] = { 0 };
	int mina = 2000, minb = 2000;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arra[i]);
		if (mina > arra[i])
		{
			mina = arra[i];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		scanf("%d", &arrb[i]);
		if (minb > arrb[i])
		{
			minb = arrb[i];
		}
	}
	printf("%d", mina + minb - 50);

	return 0;
}	