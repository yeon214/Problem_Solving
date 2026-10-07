#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<string> st;
    int n = (int)s.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            st.insert(s.substr(i, j - i + 1));
        }
    }

    cout << st.size();
    return 0;
}
