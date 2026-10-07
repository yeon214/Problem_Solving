#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(void) {
    int arr[1000], n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n, greater<int>());
    printf("%d", arr[k - 1]);
    return 0;
}