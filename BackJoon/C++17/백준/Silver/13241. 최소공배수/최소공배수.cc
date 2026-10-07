#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	

	    long long a, b;
		long long gcd = 0;
		scanf("%lld %lld", &a, &b);
		for (int j = 1; j <= a && j <= b; j++)
		{
			if (a % j == 0 && b % j == 0)
			{
				gcd = j;
			}
		}
		printf("%lld\n", a * (b / gcd));


	
	return 0;
}