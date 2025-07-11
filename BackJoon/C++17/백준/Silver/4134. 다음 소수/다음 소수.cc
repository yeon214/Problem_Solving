#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		long long num, check = 0;
		scanf("%lld", &num);
		if (num < 2) num = 2;
		else {
			while (1) {
				check = 0;
				for (int i = 2; i <= sqrt(num); i++) {
					if (num % i == 0) {
						check++;
						break;
					}
				}
				if (check == 0) break;
				else num++;
			}
		}
		printf("%lld\n", num);
	}
	return 0;
}