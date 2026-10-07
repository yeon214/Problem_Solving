#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    deque<pair<int, int>> list;
    int n, input, index, value;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> input;
        list.push_back({ i, input });
    }
    while (!list.empty()) {
        index = list.front().first;
        value = list.front().second;
        list.pop_front();

        cout << index << " ";
        if (list.empty() == true) break;
        if (value > 0) {
            for (int i = 0; i < value - 1; i++) {
                list.push_back(list.front());
                list.pop_front();
            }
        }
        else {
            for (int i = 0; i < -value; i++) {
                list.push_front(list.back());
                list.pop_back();
            }
        }
    }

    return 0;
}