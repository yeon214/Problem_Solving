#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int plus = 0;
        int total = n;
        while (n != 0)
        {
            if (n / k < 1)
            {
                break;
            }
            plus = n / k;
            total += plus;
            n = n % k;
            n = n + plus;
            plus = 0;
        }
        printf("%d\n", total);
    }
}