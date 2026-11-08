#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m, n, count = 0, temp = 0, a = 0, b = 0;
        scanf("%d %d", &m, &n);
        a = m, b = n;
        if (m > n)
        {
            temp = n;
            n = m;
            m = temp;
        }
        for (int j = m; j <= n; j++)
        {
            int sum = 0;
            for (int k = 1; k * k <= j; k++)
            {
                if (k * k == j)
                {
                    sum += k;
                }
                else if (j % k == 0)
                {
                    sum += k;
                    sum += j / k;
                }
            }
            if (sum - j > j)
            {
                count++;
            }
        }

        printf("%d-%d:%d\n", a, b, count);

    }
    return 0;
}
