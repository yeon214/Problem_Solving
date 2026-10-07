#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m;
	int clock;
	scanf("%d %d", &h, &m);
	scanf("%d", &clock);
	
	clock += m;
	h += clock / 60;
	h %= 24;
	clock %= 60;

	printf("%d %d", h, clock);

	return 0;
}
