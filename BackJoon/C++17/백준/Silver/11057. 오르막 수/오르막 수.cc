#include <iostream>
#include <algorithm>
#define MODULO 10007
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0, dp[1001][10];
    cin >> n;
    for (int i = 0; i <= 9; i++) dp[1][i] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = 1; // 끝자리가 0인 오르막 수는 항상 1개(모두 0)
        for (int j = 1; j < 10; j++) {
            dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MODULO; // 누적합 전이
        }
    }
    for (int i = 0; i <= 9; i++) ans = (ans + dp[n][i]) % MODULO;
    cout << ans;
    return 0;
}