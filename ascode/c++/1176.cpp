#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int sum = 0, odd = 0, state = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &a);
		if (a % 2 == 1) odd++;
		sum += a;
	}
	if (odd > 1 && odd < 5) state++;
	if (sum > 90 && sum < 181) state++;

	if (state == 2) printf("BEST");
	else if (state == 1) printf("GOOD");
	else printf("BAD");

	return 0;
}