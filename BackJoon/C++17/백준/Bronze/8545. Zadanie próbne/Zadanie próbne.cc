#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char arr[4];
    int a;
    scanf("%s", arr);
    for (a = 2; a >= 0; a--)
    {
        printf("%c", arr[a]);
    }
    return 0;
}