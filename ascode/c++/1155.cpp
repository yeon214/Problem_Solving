#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0;
	for (;;)
	{
		int n;
		scanf("%d", &n);
		if (n == 0) break;
		int a = 0, b = 0, c = 0, d = 0, f = 0;
		for (int i = 0; i < n; i++)
		{
			int m;
			scanf("%d", &m);
			if (m >= 90 && m <= 100) a++;
			else if (m >= 80 && m <= 89) b++;
			else if (m >= 70 && m <= 79) c++;
			else if (m >= 60 && m <= 69) d++;
			else if (m >= 0 && m <= 59) f++;

		}
		sum += 1;
		printf("<%d>\n", sum);
		printf("A : %d\n", a);
		printf("B : %d\n", b);
		printf("C : %d\n", c);
		printf("D : %d\n", d);
		printf("F : %d\n", f);
		printf("\n");

	}

	return 0;
}