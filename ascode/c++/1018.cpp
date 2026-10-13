#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int coin500, coin100, coin10;
	int total, money;
	scanf("%d", &total);
	money = total / 10;
	coin500 = money / 50;
	coin100 = (money % 50) / 10;
	coin10 = (money % 50) % 10;
	printf("%d\n", coin500);
	printf("%d\n", coin100);
	printf("%d\n", coin10);

	return 0;
}