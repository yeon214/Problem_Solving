#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, value;
    map<int, int> list;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> value;
        list[value]++;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> value;
        cout << list[value] << " ";
    }

    return 0;
}
