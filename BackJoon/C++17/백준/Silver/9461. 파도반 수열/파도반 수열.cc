#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int testcase, n;
	long long dp[101] = { 0,1,1,1,2,2 };
	for (int i = 6; i < 101; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	cin >> testcase;
	while (testcase--) {
		cin >> n;
		cout << dp[n] << "\n";
	}
	return 0;
}