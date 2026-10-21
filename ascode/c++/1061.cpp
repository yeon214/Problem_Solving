#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c;
    double x, y;
    double total;

    scanf("%d %d %d", &a, &b, &c);

    total = sqrt(b * b - 4 * a * c);

    x = (-b + total) / (2 * a);
    y = (-b - total) / (2 * a);

    if (total > 0)
    {
        if (x > y)
        {
            printf("%.4lf %.4lf", x, y);
        }
        else
        {
            printf("%.4lf %.4lf", y, x);
        }
    }
    else if (x == y)
    {
        printf("%.4lf", x);
    }
    else
    {
        printf("imaginary");
    }
    return 0;
}
