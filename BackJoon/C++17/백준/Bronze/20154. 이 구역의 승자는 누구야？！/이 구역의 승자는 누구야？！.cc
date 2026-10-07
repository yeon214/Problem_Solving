#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	char english[] = "32123333113133122212112221";
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += english[s[i] - 'A']-'0';
	}
	if (sum % 2 == 0) printf("You're the winner?");
	else printf("I'm a winner!");
	return 0;
}