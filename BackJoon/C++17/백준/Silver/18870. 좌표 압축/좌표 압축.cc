#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    for (int i = 0; i < n; i++) {
        cout << lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        if (i + 1 < n) cout << ' ';
    }

    return 0;
}
