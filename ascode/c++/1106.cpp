#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stack>
using namespace std;
bool jud(char sentence[], int len) {
    stack<char>list;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == '(' || sentence[i] == '{' || sentence[i] == '[') {
            list.push(sentence[i]);
        }
        else {
            if (list.empty()) return false;
            if (sentence[i] == ')') {
                if (list.top() == '(') list.pop();
                else return false;
            }
            else if (sentence[i] == '}') {
                if (list.top() == '{') list.pop();
                else return false;
            }
            else { // ]
                if (list.top() == '[') list.pop();
                else return false;
            }
        }
    }
    if (list.empty()) return true;
    else return false;
}
int main(void) {
    int testcase;
    scanf("%d", &testcase);
    while (testcase--) {
        char sentence[1001] = { 0 };
        int index = 0;
        scanf("%s", sentence);
        int len = strlen(sentence);
        if (jud(sentence, len) == true) printf("Good!\n");
        else printf("Retry...\n");
    }
    return 0;
}