#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    string command;
    deque <int> list;
    cin >> n;
    while (n--) {
        cin >> command;
        if (command == "push_front") {
            cin >> num;
            list.push_front(num);
        }
        else if (command == "push_back") {
            cin >> num;
            list.push_back(num);
        }
        else if (command == "pop_front") {
            if (list.empty()) cout << "-1\n";
            else {
                cout << list.front() << "\n";
                list.pop_front();
            }
        }
        else if (command == "pop_back") {
            if (list.empty()) cout << "-1\n";
            else {
                cout << list.back() << "\n";
                list.pop_back();
            }
        }
        else if (command == "size") cout << list.size() << "\n";
        else if (command == "empty") {
            if (list.empty()) cout << "1\n";
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