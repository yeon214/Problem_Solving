#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    stack <int> list;
    string sentence;
    cin >> n;
    while (n--) {
        cin >> sentence;
        if (sentence == "push") {
            cin >> num;
            list.push(num);
        }
        else if (sentence == "pop") {
            if (list.empty() == true) cout << "-1\n";
            else {
                cout << list.top() << "\n";
                list.pop();
            }
        }
        else if (sentence == "size") {
            cout << list.size() << "\n";
        }
        else if (sentence == "empty") {
            if (list.empty() == true) cout << "1\n";
            else cout << "0\n";
        }
        else if (sentence == "top") {
            if (list.empty() == true) cout << "-1\n";
            else {
                cout << list.top() << "\n";
            }
        }
    }
    return 0;
}