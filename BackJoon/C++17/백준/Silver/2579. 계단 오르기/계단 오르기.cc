#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, stairs[301] = { 0 }, dp[301];
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> stairs[i];
	fill(&dp[0], &dp[n], 0);
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	dp[3] = max(stairs[1] + stairs[3], stairs[3] + stairs[2]);
	for (int i = 4; i <= n; i++) {
		dp[i] = max(stairs[i] + dp[i - 2], stairs[i] + stairs[i - 1] + dp[i - 3]);
	}
	cout << dp[n];
	return 0;
}