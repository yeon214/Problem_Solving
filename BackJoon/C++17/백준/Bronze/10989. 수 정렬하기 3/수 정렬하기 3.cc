#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    int n, arr[10001] = { 0 }, num;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        arr[num]++;
    }
    for (int i = 1; i <= 10000; i++) {
        if (arr[i]) {
            while (arr[i]) {
                printf("%d\n", i);
                arr[i]--;
            }
        }
    }
    return 0;
}