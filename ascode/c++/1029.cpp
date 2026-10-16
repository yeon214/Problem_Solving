#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int total;
	int day, hour, minute, second;
	int clock;
	scanf("%d", &total);
	day = total / (24 * 60 * 60);
	clock = total % (24 * 60 * 60);
	hour = clock / (60 * 60);
	clock %= (60 * 60);
	minute = clock / 60;
	clock %= 60;
	second = clock;

	printf("%d %d %d %d", day, hour, minute, second);

	return 0;
}