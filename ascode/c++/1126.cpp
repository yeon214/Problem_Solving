#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int w = 0, b = 0;
	for (int i = 0; i < 361; i++)
	{
		int a;
		scanf("%d", &a);
		if (a == 1) b++;
		else if (a == 2) w++;
	}
	printf("%d %d", b, w);

	return 0;
}