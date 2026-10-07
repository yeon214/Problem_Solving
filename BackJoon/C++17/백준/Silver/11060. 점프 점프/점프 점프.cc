#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, list[1001], dp[1001];
    fill(&dp[0], &dp[1001], 1000);
    dp[1] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> list[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= i + list[i] && j <= n; j++) {
            dp[j] = min(dp[j], dp[i] + 1);
        }
    }
    if (dp[n] == 1000) cout << "-1";
    else cout << dp[n];
    //cout << "\n\n";
    //for (int i = 1; i <= n; i++) cout << dp[i] << "\n";
    return 0; 
}