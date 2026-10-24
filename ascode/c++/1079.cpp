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
        if (a == 1)
        {
            printf("*\n");
        }
        else
        {
            for (int j = 0; j < a / 2 + 1; j++)
            {
                if ((j == 0) || (j == a - 1))
                {
                    for (int k = 0; k < a; k++)
                    {
                        printf("*");
                    }
                }
                else
                {
                    for (int k = 0; k < a; k++)
                    {
                        if ((k == 0) || (k == a / 2 - j) || (k == a - 1) || (k == a / 2 + j))
                        {
                            printf("*");
                        }
                        else printf(" ");
                    }
                }
                printf("\n");
            }
            for (int j = 0; j < a / 2; j++)
            {
                if (j == a / 2 - 1)
                {
                    for (int k = 0; k < a; k++)
                    {
                        printf("*");
                    }
                }
                else
                {
                    for (int k = 0; k < a; k++)
                    {
                        if ((k == 0) || (k == 1 + j) || (k == a - 1) || (k == a - 2 - j))
                        {
                            printf("*");
                        }
                        else printf(" ");
                    }
                    printf("\n");
                }
            }
            printf("\n");
        }
    }
    return 0;
}