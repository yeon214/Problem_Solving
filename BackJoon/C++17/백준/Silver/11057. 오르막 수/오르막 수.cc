#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MOD = 10007;
    int n; 
    cin >> n;

    // dp[d] = 현재 길이에서 마지막 자리가 d인 오르막 수 개수
    int dp[10];
    for (int d = 0; d < 10; d++) dp[d] = 1; // 길이 1: 0~9 각 1개

    for (int len = 2; len <= n; len++) {
        for (int d = 1; d < 10; d++) {
            dp[d] = (dp[d] + dp[d - 1]) % MOD; // 누적합: dp[len][d] = dp[len][d-1] + dp[len-1][d]
        }
    }

    int ans = 0;
    for (int d = 0; d < 10; d++) ans = (ans + dp[d]) % MOD;
    cout << ans;
    return 0;
}
