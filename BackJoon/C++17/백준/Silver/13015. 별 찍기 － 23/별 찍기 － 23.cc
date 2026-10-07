#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < 2 * n - 1; i++)
	{
		if (i == 0 || i == 2 * n - 2)
		{
			for (j = 0; j < n; j++) printf("*");
			for (j = 0; j < 2 * n - 3; j++) printf(" ");
			for (j = 0; j < n; j++) printf("*");
		}
		else if (i == n - 1)
		{
			for (j = 0; j < i; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
		}
		else if (i < n - 1)
		{
			for (j = 0; j < i; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
			for (j = 0; j < (2 * n) - 3 - (2 * i); j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
		}
		else
		{

			for (j = 0; j < (2 * n - 2 - i); j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
			for (j = 0; j < (i - (n - 1)) * 2 - 1; j++) printf(" ");
			printf("*");
			for (j = 0; j < n - 2; j++) printf(" ");
			printf("*");
		}

		printf("\n");
	}

}