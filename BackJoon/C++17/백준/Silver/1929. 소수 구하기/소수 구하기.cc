#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[1000001];
int main(void) {
    int m, n;
    cin >> m >> n;
    for (int i = 2; i <= n; i++) {
        arr[i] = i;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (arr[i] == 0) continue;
        for (int j = 2 * i; j <= n; j += i) arr[j] = 0;
    }
    for (int i = m; i <= n; i++) {
        if (arr[i]) cout << i << "\n";
    }

    return 0;
}
