#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    for (;;)
    {
        int arra[10][10] = { 0 }, arrb[10][10] = { 0 };
        int m1, n1, m2, n2; //m이 행 n이 열
        scanf("%d %d", &m1, &n1);
        if ((m1 == 0) && (n1 == 0))
        {
            break;
        }
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                scanf("%d", &arra[i][j]);
            }
        }
        scanf("%d %d", &m2, &n2);
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                scanf("%d", &arrb[i][j]);
            }
        }
        if ((m1 == m2) && (n1 == n2))
        {
            for (int i = 0; i < m2; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    printf("%d ", arra[i][j] + arrb[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Impossible\n");
        }
    }
    return 0;
}
