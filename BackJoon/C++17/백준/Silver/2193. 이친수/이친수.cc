#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long dp[91] = { 0,1,1 };
    cin >> n;
    for (int i = 3; i <= n; i++) dp[i] = dp[i - 2] + dp[i - 1];
    cout << dp[n];
    return 0;
}