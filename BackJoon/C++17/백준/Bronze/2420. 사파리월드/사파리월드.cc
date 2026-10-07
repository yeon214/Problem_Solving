#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", abs(n - m));
    return 0;
}