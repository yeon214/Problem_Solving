#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void) {
	string sentence;
	while (getline(cin, sentence)) {
		if (sentence[0] == '.') break;
		stack <char> list;
		bool jud = true;
		for (int i = 0; i < sentence.length(); i++) {
			if (sentence[i] == '[' || sentence[i] == '(') list.push(sentence[i]);
			else if (sentence[i] == ']' || sentence[i] == ')') {
				if (list.empty()) {
					jud = false;
					break;
				}
				if (sentence[i] == ']') {
					if (list.top() == '[') list.pop();
					else {
						jud = false;
						break;
					}
				}
				else {
					if (list.top() == '(') list.pop();
					else {
						jud = false;
						break;
					}
				}
			}
		}
		if (jud == true && list.empty()) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}