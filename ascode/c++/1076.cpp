#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int testcase;
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		int size, thick;
		scanf("%d %d", &size, &thick);
		if (thick > size / 2)
		{
			printf("Mental Damages\n");
		}
		else
		{
			for (int j = 0; j < thick; j++)
			{
				for (int k = 0; k < size; k++)
				{
					printf("@");
				}
				printf("\n");
			}
			for (int j = 0; j < size - 2 * thick; j++)
			{
				for (int k = 0; k < thick; k++)
				{
					printf("@");
				}
				for (int k = 0; k < size - 2 * thick; k++)
				{
					printf("+");
				}
				for (int k = 0; k < thick; k++)
				{
					printf("@");
				}
				printf("\n");
			}
			for (int j = 0; j < thick; j++)
			{
				for (int k = 0; k < size; k++)
				{
					printf("@");
				}
				printf("\n");
			}
		}
	}

	return 0;
}