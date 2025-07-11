#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void){
    int arr[10001] = { 0 }, m, n, sum = 0, index = 0;
    scanf("%d %d", &m, &n);
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j <= n; j += i) {
            arr[j] = 0;
        }
    }
    for (int i = m; i <= n; i++) {
        if (arr[i]) {
            sum += i;
            if (index == 0) index = i;
        }
    }
    if (sum) printf("%d\n%d", sum, index);
    else printf("-1");
    return 0;
}