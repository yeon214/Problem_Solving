#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1e9;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int aArr[3001], bArr[3001], dp[3001], aMin, bMin, aIndex, bIndex;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> aArr[i];
    for (int i = 0; i < n; i++) cin >> bArr[i];
    fill(dp, dp + n, INF);
    for (int i = 0; i < n; i++) {
        aMin = INF, bMin = INF; // dp[i] = INF;
        for (int j = i; j < n; j++) {
            if (aArr[j] < aMin) {
                aMin = aArr[j];
                aIndex = j;
            }
            if (bArr[j] < bMin) {
                bMin = bArr[j];
                bIndex = j;
            }
            if (aIndex == bIndex) {
                if (i == 0) dp[j] = 1;
                else dp[j] = min(dp[j], dp[i - 1] + 1);
            }
        }
    }
    cout << dp[n - 1];

    return 0;
}