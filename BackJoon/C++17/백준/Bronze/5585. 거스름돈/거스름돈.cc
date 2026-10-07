#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int remain = 1000, num, count = 0;
	cin >> num;
	remain -= num;
	if (remain >= 500) count += remain / 500, remain %= 500;
	if (remain >= 100) count += remain / 100, remain %= 100;
	if (remain >= 50) count += remain / 50, remain %= 50;
	if (remain >= 10) count += remain / 10, remain %= 10;
	if (remain >= 5) count += remain / 5, remain %= 5;
	if (remain >= 1) count += remain / 1, remain %= 1;
	cout << count;
	return 0;
}