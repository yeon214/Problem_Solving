#include <iostream>
#include <algorithm>
using namespace std;
int tree[100000];
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, minValue;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> tree[i];
    minValue = tree[1] - tree[0];
    for (int i = 1; i < n - 1; i++) {
        minValue = gcd(minValue, tree[i + 1] - tree[i]);
    }
    cout << (tree[n - 1] - tree[0]) / minValue + 1 - n;

    return 0;
}