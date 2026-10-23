#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, c = 65;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int s, t;
		scanf("%d %d", &s, &t);
		if (s % 2 == 0)
		{
			s++;
		}
		if ((s / 2) < t)
		{
			printf("No DAP");
		}
		else
		{
			for (int j = 0; j < s; j++)
			{
				for (int k = 0; k < s / 2; k++)
				{
					if (j < t)
					{
						printf("%c", (c + s / 2 - k));
					}
					else if ((j >= t) && (j < s - t))
					{
						if (k < t)
						{
							printf("%c", (c + s / 2 - k));
						}
						else
						{
							printf("+");
						}
					}
					else
					{
						printf("%c", (c + s / 2 - k));
					}

				}
				for (int k = 0; k < s / 2 + 1; k++)
				{
					if (j < t)
					{
						printf("%c", c + k);
					}
					else if ((j >= t) && (j < s - t))
					{
						if (k <= s / 2 - t)
						{
							printf("+");
						}
						else
						{
							printf("%c", c + k);
						}
					}
					else
					{
						printf("%c", c + k);
					}

				}
				printf("\n");
			}
		}

		printf("\n");
	}
	return 0;
}