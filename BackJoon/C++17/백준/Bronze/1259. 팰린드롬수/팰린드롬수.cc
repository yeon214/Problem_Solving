#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main(void){
	while (1) {
		string sentence;
		int judgement = 1;
		cin >> sentence;
		if (sentence == "0") break;
		for (int i = 0; i < sentence.length(); i++) {
			if (sentence[i] != sentence[sentence.length() - 1 - i]) {
				judgement = 0;
				break;
			}
		}
		if (judgement) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}