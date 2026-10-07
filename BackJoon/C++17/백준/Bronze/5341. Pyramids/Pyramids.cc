#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    for (;;)
    {
        int n, sum = 0, a;
        scanf("%d", &n);
        if (n)
        {
            for (a = 1; a <= n; a++)
            {
                sum += a;
            }
            printf("%d\n", sum);
        }
        else break;
    }
    return 0;
}