#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d\n", x + y);
    }
    return 0;
}