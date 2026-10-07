#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
    char arr[101];
    scanf("%s", arr);
    int len = strlen(arr), a;
    for (a = 0; a < len; a++)
    {
        if (arr[a] >= 'A' && arr[a] <= 'Z') arr[a] += 32;
        else arr[a] -= 32;
    }
    printf("%s", arr);
    return 0;
}