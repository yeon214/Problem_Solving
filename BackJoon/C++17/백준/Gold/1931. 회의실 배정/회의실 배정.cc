#include <iostream>
#include <algorithm>
using namespace std;
class meeting {
public: int start, end;
};
meeting list[100000];
bool compare(const meeting &a, const meeting &b) {
	if (a.end != b.end) return a.end < b.end;
	return a.start < b.start;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, count = 1, present;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> list[i].start >> list[i].end;
	sort(list, list+n, compare);
	present = list->end;
	for (int i = 1; i < n; i++) {
		if (list[i].start >= present) {
			count++;
			present = list[i].end;
		}
	}
	cout << count;
	return 0;
}