#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		result = max(result, (n - i) * arr[i]);
	}
	cout << result;
	return 0;
}