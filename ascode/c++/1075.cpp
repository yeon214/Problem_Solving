#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int s, n;
        scanf("%d %d", &s, &n);
        if (s % 2 == 1)
        {
            s++;

        }
        if (s < n * 2)
        {
            printf("No DAP!\n");
        }
        else
        {
            for (int j = 0; j < s; j++)
            {
                if ((j >= 0) && (j < n) || (j >= s - n) && (j < s))
                {
                    for (int k = 0; k < s - 1 - j; k++)
                    {
                        printf(" ");
                    }
                    for (int k = 0; k <= 2 * j; k++)
                    {
                        printf("*");
                    }
                }
                else
                {
                    for (int k = 0; k < s - 1 - j; k++)
                    {
                        printf(" ");
                    }
                    for (int k = 0; k <= 2 * j; k++)
                    {
                        if ((k >= 0) && (k < n) || (k > 2 * j - n) && (k <= 2 * j))
                        {
                            printf("*");
                        }
                        else
                        {
                            printf("+");
                        }
                    }
                }
                printf("\n");
            }
        }
    }

    return 0;
}