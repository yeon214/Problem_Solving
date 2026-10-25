#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0) a++;
        for (int j = 0; j < a / 2; j++)
        {
            for (int k = 0; k <= j; k++)
            {
                printf("*");
            }
            for (int k = a - 2 - 2 * j; k > 0; k--)
            {
                printf(" ");
            }
            for (int k = 0; k <= j; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int j = 0; j < a; j++)
        {
            printf("*");
        }
        printf("\n");
        for (int j = 0; j < a / 2; j++)
        {
            for (int k = a / 2 - j; k > 0; k--)
            {
                printf("*");
            }
            for (int k = 0; k <= 2 * j; k++)
            {
                printf(" ");
            }
            for (int k = a / 2 - j; k > 0; k--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}