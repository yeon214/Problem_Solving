#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	while (testcase--) {
		char sentence[51];
		stack <char> list;
		scanf("%s", sentence);
		int len = strlen(sentence), flag = 1; //bool 대신
		for (int i = 0; i < len; i++) {
			if (sentence[i] == '(') list.push('(');
			else {
				if (list.empty()) {
					flag = 0;
					break;
				}
				if (list.top() == '(') list.pop();
				else {
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1 && list.empty()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}