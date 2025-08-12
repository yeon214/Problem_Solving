#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long square[1001] = { 0,1,2};
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++) square[i] = (square[i - 1] + square[i - 2]) % 10007;
	cout << square[n];
	return 0;
}