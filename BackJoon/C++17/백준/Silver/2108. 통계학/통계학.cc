#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, input[8001] = { 0 }, num, index = 0, value = 0, check = 0;
	double average = 0.0;
	vector <int> list;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num;
		average += num;
		list.push_back(num);
		input[num + 4000]++;
	}
	std::sort(list.begin(), list.end());
	average = round(average / n);
	if (average == -0) average = 0;
	for (int i = 0; i < 8001; i++) {
		if (value < input[i]) value = input[i];
	}
	for (int i = 0; i < 8001; i++) {
		if (check == 2) break;
		if (value == input[i]) {
			index = i;
			check++;
		}
	}

	cout << average << "\n";
	cout << list[list.size() / 2] << "\n";
	cout << index - 4000 << "\n";
	cout << list[list.size() - 1] - list[0];
	return 0;
}