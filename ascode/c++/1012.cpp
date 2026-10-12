#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	unsigned int second;
	int day, hour, min, sec;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &second);

		day = second / (3600 * 24);
		hour = (second % (3600 * 24)) / 3600;
		min = ((second % (3600 * 24)) % 3600) / 60;
		sec = ((second % (3600 * 24)) % 3600) % 60;
		printf("%d day : %d hour : %d min : %d sec\n", day, hour, min, sec);
	}


	return 0;
}