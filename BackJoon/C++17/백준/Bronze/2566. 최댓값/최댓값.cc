#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) 
{
    int max = 0, arr[9][9] = { 0 };
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if ((i == 0) && (j == 0))
            {
                max = arr[0][0];
            }
            else if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (max == arr[i][j])
            {
                printf("%d\n", max);
                printf("%d %d\n", i+1, j+1);
            }
        } 
    }
    return 0;
}