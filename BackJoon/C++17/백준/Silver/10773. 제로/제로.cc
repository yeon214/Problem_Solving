#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, input, result = 0;
    stack <int> list;
    cin >> k;
    while (k--) {
        cin >> input;
        if (input == 0) list.pop();
        else list.push(input);
    }
    while (list.empty() == false) {
        result += list.top();
        list.pop();
    }
    cout << result;

    return 0;
}