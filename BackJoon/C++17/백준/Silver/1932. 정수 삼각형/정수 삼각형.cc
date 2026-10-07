#include <iostream>
#include <algorithm>
using namespace std;
int triangle[501][501], dp[501][501] = { 0 };
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,  result = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}
	dp[1][1] = triangle[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) dp[i][j] = dp[i - 1][j] + triangle[i][j];
			else if (j == i) dp[i][j] = dp[i - 1][j - 1] + triangle[i][j];
			else dp[i][j] = max(dp[i - 1][j-1] + triangle[i][j], dp[i - 1][j] + triangle[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		result = max(result, dp[n][i]);
	}
	cout << result;
	return 0;
}