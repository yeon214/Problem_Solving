#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int testcase;
	string sentence;
	stack <char> word;
	cin >> testcase;
	cin.ignore();
	while (testcase--) {
		getline(cin, sentence);
		sentence += ' ';
		for (int i = 0; i < sentence.size(); i++) {
			if (sentence[i] == ' ') {
				while (!word.empty()) {
					cout << word.top();
					word.pop();
				}
				cout << " ";
			}
			else word.push(sentence[i]);
		}
		cout << "\n";
	}
	return 0;
}