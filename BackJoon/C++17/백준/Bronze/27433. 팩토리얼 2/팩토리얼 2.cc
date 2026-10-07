#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int n;
    long long multi = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        multi *= i;
    }
    printf("%lld", multi);
    return 0;
}