#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[5][16]={0};
	int a, b;
	for (a = 0; a < 5; a++)
	{
		scanf("%s", word[a]);
	}
	for (a = 0; a < 15; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (word[b][a]) printf("%c", word[b][a]);
		}
	}
	return 0;
}