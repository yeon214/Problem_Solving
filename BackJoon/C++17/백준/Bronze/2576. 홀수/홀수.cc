#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int num, sum = 0, minResult = 100;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			sum += num;
			minResult = min(minResult, num);
		}
	}
	if (sum == 0) cout << "-1";
	else cout << sum << "\n" << minResult;
	return 0;
}