#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sentence;
    while (getline(cin, sentence)) {
        stack <char> list;
        if (sentence == ".") break;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == '(' || sentence[i] == '[') list.push(sentence[i]);
            else if (sentence[i] == ')' || sentence[i] == ']'){
                if (list.empty() == true) {
                    list.push(sentence[i]);
                    break;
                }
                if (sentence[i] == ')') {
                    if (list.top() == '(') list.pop();
                    else break;
                }
                else {
                    if (list.top() == '[') list.pop();
                    else break;
                }
            }
        }
        if (list.empty() == true) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}