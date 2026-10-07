#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, command, value;
    deque<int> list;
    cin >> n;
    while (n--) {
        cin >> command;
        if (command == 1) {
            cin >> value;
            list.push_front(value);
        }
        if (command == 2) {
            cin >> value;
            list.push_back(value);
        }
        if (command == 3) {
            if (list.empty() == true) cout << "-1\n";
            else {
                cout << list.front() << "\n";
                list.pop_front();
            }
        }
        if (command == 4) {
            if (list.empty() == true) cout << "-1\n";
            else {
                cout << list.back() << "\n";
                list.pop_back();
            }
        }
        if (command == 5) {
            cout << list.size() << "\n";
        }
        if (command == 6) {
            if (list.empty() == true) cout << "1\n";
            else cout << "0\n";
        }
        if (command == 7) {
            if (list.empty() == true) cout << "-1\n";
            else cout << list.front() << "\n";
        }
        if (command == 8) {
            if (list.empty() == true) cout << "-1\n";
            else cout << list.back() << "\n";
        }
    }
    return 0;
}
