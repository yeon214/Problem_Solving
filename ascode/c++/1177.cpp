#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	if (a == 100)
	{
		printf("Perfect! Congratulations!");
	}
	else if (90 <= a && a <= 99)
	{
		printf("Very good!");
	}
	else if (80 <= a && a <= 89)
	{
		printf("Good!");
	}
	else if (70 <= a && a <= 79)
	{
		printf("Not bad!");
	}
	else
	{
		printf("Study hard!");
	}
	return 0;
}