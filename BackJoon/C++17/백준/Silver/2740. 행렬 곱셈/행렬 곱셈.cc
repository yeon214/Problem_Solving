#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[101][101], b[101][101], n, m, k, result;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			result = 0;
			for (int p = 0; p < m; p++) {
				result += a[i][p] * b[p][j];
			}
			cout << result << " ";
		}
		cout << "\n";
	}
	return 0;
}