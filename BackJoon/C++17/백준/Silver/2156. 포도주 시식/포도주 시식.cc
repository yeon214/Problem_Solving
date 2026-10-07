#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, grape[10001], dp[10001]; //0은 안마심 1은 마심
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> grape[i];
    dp[1] = grape[1];
    dp[2] = dp[1] + grape[2];
    dp[3] = max(max(grape[1] + grape[3], grape[2] + grape[3]), dp[2]);
    for (int i = 4; i <= n; i++) {
        dp[i] = max(max(dp[i-2] + grape[i], dp[i-3] + grape[i - 1] + grape[i]), dp[i - 1]);
    }
    cout << dp[n];
    return 0;
}