#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, num;
    string sentence;
    queue <int> list;
    cin >> n;
    while (n--) {
        cin >> sentence;
        if (sentence == "push") {
            cin >> num;
            list.push(num);
        }
        else if (sentence == "pop") {
            if (list.empty() == true) cout << -1 << '\n';
            else {
                cout << list.front() << "\n";
                list.pop();
            }
        }
        else if (sentence == "size") {
            cout << list.size() << "\n";
        }
        else if (sentence == "empty") {
            if (list.empty() == true) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (sentence == "front") {
            if (list.empty() == true) cout << -1 << '\n';
            else {
                cout << list.front() << "\n";
            }
        }
        else if (sentence == "back") {
            if (list.empty() == true) cout << -1 << '\n';
            else {
                cout << list.back() << "\n";
            }
        }
    }
    return 0;
}