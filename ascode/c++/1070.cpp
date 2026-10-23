#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, input, result;
    cin >> testcase;
    while (testcase--) {
        cin >> input;
        result = ((input >> 24) & 0x000000FF) |
            ((input >> 8) & 0x0000FF00) |
            ((input << 8) & 0x00FF0000) |
            ((input << 24) & 0xFF000000);
        cout << result << "\n";
    }

    return 0;
}