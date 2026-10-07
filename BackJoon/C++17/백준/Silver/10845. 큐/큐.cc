#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    queue <int> list;
    string command;
    cin >> n;
    while (n--) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            list.push(num);
        }
        else if (command == "pop") {
            if (list.empty()) cout << "-1\n";
            else {
                cout << list.front() << "\n";
                list.pop();
            }
        }
        else if (command == "size") cout << list.size() << "\n";
        else if (command == "empty") {
            if (list.empty() == true) cout << "1\n";
            else cout << "0\n";
        }
        else if (command == "front") {
            if (list.empty()) cout << "-1\n";
            else cout << list.front() << "\n";
        }
        else {
            if (list.empty()) cout << "-1\n";
            else cout << list.back() << "\n";
        }
    }
    return 0;
}