#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string sentence, joi = "JOI", ioi = "IOI", three;
	int jCount = 0, iCount = 0;
	cin >> sentence;
	for (int i = 0; i <= sentence.length() - 3; i++) {
		three += sentence[i];
		three += sentence[i + 1];
		three += sentence[i + 2];
		if (three == joi) jCount++;
		if (three == ioi) iCount++;
		three = "";
	}
	cout << jCount << "\n" << iCount;
	return 0;
}