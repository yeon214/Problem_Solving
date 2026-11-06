#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void hanoi(int n, int start, int end, int mid) {
    if (n == 1) {
        if (n == 1) printf("원판 %d을 %c 에서 %c로 옮긴다\n", n, start + 64, end + 64);
        else printf("원판 %d를 %c 에서 %c로 옮긴다\n", n, start + 64, end + 64);
    }
    else {
        hanoi(n - 1, start, mid, end);
        if (n == 1) printf("원판 %d을 %c 에서 %c로 옮긴다\n", n, start + 64, end + 64);
        else printf("원판 %d를 %c 에서 %c로 옮긴다\n", n, start + 64, end + 64);
        hanoi(n - 1, mid, end, start);
    }
}
int main(void) {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        int num;
        scanf("%d", &num);
        hanoi(num, 1, 3, 2);
        printf("%d\n", (int)pow(2, num) - 1);
    }
    return 0;
}