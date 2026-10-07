#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result, present;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	result = arr[1], present = arr[1];
	for (int i = 2; i <= n; i++) {
		present = max(arr[i], arr[i] + present); //새로 시작 vs 이어붙이기
		result = max(present, result);
	}
	cout << result;
	return 0;
}