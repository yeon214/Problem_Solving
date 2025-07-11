#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char c[1000001] = { 0 };
	scanf("%[^\n]", c);
	int count = 0;
	int lenC = strlen(c);
	if (c[0] == ' ' && lenC==1)
	{
		printf("0");
	}
	else
	{
		if (c[0] == ' ')
		{
			for (int i = 0; i < lenC-1; i++)
			{
				if (c[i] == ' ')
				{
					count++;
				}
			}
			printf("%d", count);
		}
		else
		{
			for (int i = 0; i < lenC-1; i++)
			{
				if (c[i] == ' ')
				{
					count++;
				}
			}
			count++;
			printf("%d", count);
		}
	}
	return 0;
}