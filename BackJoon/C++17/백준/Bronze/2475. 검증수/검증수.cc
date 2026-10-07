#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num, sum = 0, a;
    for (a = 0; a < 5; a++)
    {
        scanf("%d", &num);
        sum += num * num;
    }
    printf("%d", sum % 10);
    return 0;
}