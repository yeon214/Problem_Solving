#include <stdio.h>

int main()
{
    char c;
    int total;
    scanf("%c", &c);
    total = (int)c;
    if ((total >= 33) && (total <= 47) || (total >= 58) && (total <= 64) || (total >= 91) && (total <= 96) || (total >= 123) && (total <= 126))
    {
        printf("special");
    }
    else if ((total >= 48) && (total <= 57))
    {
        printf("number");
    }
    else if ((total >= 65) && (total <= 90))
    {
        printf("uppercase");
    }
    else if ((total >= 97) && (total <= 122))
    {
        printf("lowercase");
    }

    return 0;
}