#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a[7] = { 0 };
    int test, temp = 0;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        for (int k = 0; k < 7; k++) {
            scanf("%d", &a[k]);
        }

        for (int k = 0; k < 6; k++) {
            for (int j = 0; j < 7 - k - 1; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }


        int max = a[5];
        int min = a[1];


        if (max - min < 5) {
            double sum = (a[1] + a[2] + a[3] + a[4] + a[5]);
            printf("%d\n", (int)(sum / 5.0));
        }
        else {
            double sum = (a[2] + a[3] + a[4]);
            printf("%d\n", (int)(sum / 3.0));
        }
    }

    return 0;
}
