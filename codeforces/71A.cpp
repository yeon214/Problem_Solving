#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, len;
    string input;
    cin >> n;
    while (n--) {
        cin >> input;
        len = input.length();
        if (len < 11) cout << input << "\n";
        else cout << input[0] << len - 2 << input[len - 1] << "\n";
    }

    return 0;
}
