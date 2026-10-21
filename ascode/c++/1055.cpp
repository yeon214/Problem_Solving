#include <stdio.h>

int main() {
    int testcase, a;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &a);
        for (int j = 0; j < a; j++)
        {
            for (int k = 0; k < j + 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}