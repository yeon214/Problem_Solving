#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000], sum[100000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, left, right;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sum[0] = arr[0];
    for (int i = 1; i < n; i++) sum[i] = sum[i - 1] + arr[i];
    while (m--) {
        cin >> left >> right;
        if (right == 1) cout << sum[0] << "\n";
        else if (left == 1) cout << sum[right - 1] << "\n";
        else cout << sum[right - 1] - sum[left - 2] << "\n";
    }
    return 0;
}
