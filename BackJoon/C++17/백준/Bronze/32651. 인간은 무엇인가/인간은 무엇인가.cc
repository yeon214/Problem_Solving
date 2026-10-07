#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    if (n >= 2024 && n <= 100000)
    {
        if (n % 2024 == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}