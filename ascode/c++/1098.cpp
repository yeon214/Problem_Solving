#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int test;
	int a;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		scanf("%d", &a);
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz\n");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", a);
		}
	}

	return 0;
}