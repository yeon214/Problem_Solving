#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    double n, total = 1;
    scanf("%lf", &n);
    if (n == 0)
    {
        printf("1");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            total *= i;
        }
        printf("%.0lf", total);
    }

    return 0;
}