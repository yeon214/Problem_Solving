#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000001] = { 0,0,1,1 };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	cin >> num;
	for (int i = 4; i <= num; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) dp[i] = min(dp[i / 3] + 1, dp[i]);
		if (i % 2 == 0) dp[i] = min(dp[i / 2] + 1, dp[i]);
	}
	cout << dp[num];
	return 0;
}