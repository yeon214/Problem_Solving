#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int height[9], criminal1, criminal2, sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}
	sort(height, height + 9);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - height[i] - height[j] == 100) {
				criminal1 = height[i];
				criminal2 = height[j];
				break;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (height[i] == criminal1 or height[i] == criminal2) continue;
		cout << height[i] << "\n";
	}
	return 0;
}