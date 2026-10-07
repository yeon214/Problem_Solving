#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string> unheard, result;
    string name;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> name;
        unheard.insert(name);
    }
    for (int i = 0; i < m; i++) {
        cin >> name;
        if (unheard.find(name) != unheard.end()) result.insert(name);
    }
    cout << result.size() << "\n";
    for (const string& s : result) {
        cout << s << "\n";
    }

    return 0;
}
