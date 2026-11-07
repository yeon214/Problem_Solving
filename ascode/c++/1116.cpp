#include <stdio.h>

int main() {
    int testcase, a, x;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++)
    {
        scanf("%d", &a);
        int max = -1001, min = 1001;
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &x);
            if (x > max) max = x;
            if (min > x) min = x;
        }
        if (max < 0 || min < 0) printf("HMM!\n");
        else if (max + min == 0) printf("ZERO\n");
        else if ((max + min) % 7 == 0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}