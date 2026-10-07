#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int dp[11] = { 1,2,4 }, testcase, num;
	for (int i = 3; i < 11; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	cin >> testcase;
	while (testcase--) {
		cin >> num;
		cout << dp[num - 1] << "\n";
	}
	return 0;
}