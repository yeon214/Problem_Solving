#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, coin[10], k, count = 0, cal;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> coin[i];
    for (int i = n - 1; i >= 0; i--) {
        cal = k / coin[i];
        count += cal;
        k -= coin[i] * cal;
    }
    cout << count;
    return 0;
}