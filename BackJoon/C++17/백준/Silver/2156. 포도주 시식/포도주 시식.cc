#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int wine[10000], dp[10000] = { 0 }, n, result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> wine[i];
	if (n == 1) {
		cout << wine[0];
		return 0;
	}
	if (n == 2) {
		cout << wine[0] + wine[1];
		return 0;
	}
	dp[0] = wine[0];
	dp[1] = wine[0] + wine[1];
	dp[2] = max(max(dp[1], wine[0] + wine[2]), wine[1] + wine[2]);
	for (int i = 3; i < n; i++) {
		dp[i] = max(max(dp[i - 1], dp[i - 2] + wine[i]), dp[i - 3] + wine[i - 1] + wine[i]);
	}
	cout << dp[n - 1];
	return 0;
}