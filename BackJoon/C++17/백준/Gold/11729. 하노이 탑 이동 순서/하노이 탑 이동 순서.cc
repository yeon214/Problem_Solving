#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void hanoi(int n, int start, int end, int mid) {
    if (n == 1) {
       printf("%d %d\n", start ,end );
    }
    else {
        hanoi(n - 1, start, mid, end);
        printf("%d %d\n", start, end);
        hanoi(n - 1, mid, end, start);
    }
}
int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d\n", (int)pow(2, num) - 1);
    hanoi(num, 1, 3, 2);
    return 0;
}