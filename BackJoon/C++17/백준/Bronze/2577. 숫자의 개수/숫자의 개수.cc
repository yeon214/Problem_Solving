#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, total = 1, num[10] = { 0 };
    string change;
    cin >> a >> b >> c;
    total *= (a * b * c);
    change = to_string(total);
    for (int i = 0; i < change.length(); i++) {
        num[change[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << num[i] << "\n";
    }
    return 0;
}