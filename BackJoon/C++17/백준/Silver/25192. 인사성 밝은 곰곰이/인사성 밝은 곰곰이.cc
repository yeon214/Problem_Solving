#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set <string> list;
    int n, result = 0;
    string input;
    cin >> n;
    while (n--) {
        cin >> input;
        if (input == "ENTER") {
            result += list.size();
            list.clear();
        }
        else list.insert(input);
    }
    result += list.size();
    cout << result;
    return 0;
}
