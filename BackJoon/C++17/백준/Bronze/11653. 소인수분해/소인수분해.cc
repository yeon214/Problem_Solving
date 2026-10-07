#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(void){
	int n;
	vector <int> list;
	cin >> n;
	for (int i = 2; i <= n;) {
		if (n == 1) break;
		if (n % i == 0) {
			list.push_back(i);
			n /= i;
		}
		else i++;
	}
	for (int i : list) {
		cout << i << endl;
	}
	return 0;
}