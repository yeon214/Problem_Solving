#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		int t, m;
		double hour, minute;
		scanf("%d %d", &t, &m);
		t %= 12;
		hour = (double)(t * 30 + m * 0.5);
		minute = (double)(m * 6);
		double diff = abs(hour - minute);
		if (diff > 180) diff = 360 - diff;
		printf("%.1lf\n", diff);
	}
	return 0;
}