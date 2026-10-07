#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001] = { 0,1,2,3 };
const int c = 15746;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 4; i <= n; i++) {
        dp[i] = ((dp[i - 2] % c) + (dp[i - 1] % c)) % c;
    }
    cout << dp[n];
    return 0;
}