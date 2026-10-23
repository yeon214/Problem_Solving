#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0, sum = 0;
    for (int i = a; i <= b; i++)
    {
        if ((i % 7 == 0) && (i % 2 == 0))
        {
            sum += i;
            count++;
        }
    }
    printf("%d %d", count, sum);

    return 0;
}