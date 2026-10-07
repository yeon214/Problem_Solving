#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
    char arr[101] = { 0 };
    scanf("%s", arr);
    int len = strlen(arr), check = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len - i - 1])
        {
            check++;
            break;
        }
    }
    if (check == 0) printf("1");
    else printf("0");
    return 0;
}