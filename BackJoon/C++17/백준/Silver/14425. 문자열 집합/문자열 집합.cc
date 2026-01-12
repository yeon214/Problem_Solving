#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string> sList;
    string input;
    int n, m, result = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> input;
        sList.insert(input);
    }
    for (int i = 0; i < m; i++) {
        cin >> input;
        if (sList.find(input) != sList.end()) ++result;
    }
    cout << result;

    return 0;
}
