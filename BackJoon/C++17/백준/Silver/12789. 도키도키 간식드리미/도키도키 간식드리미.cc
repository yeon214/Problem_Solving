#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack <int> right, under;
    int n, count = 1, input;
    bool result = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        under.push(input);
    }
    for (int i = 0; i < n; i++) {
        right.push(under.top());
        under.pop();
    }
    while(1) {
        if (right.empty() == true) {
            if (under.empty() == true) break;
            if (under.top() == count) {
                under.pop();
                count++;
            }
            else {
                result = false;
                break;
            }
        }
        else {
            if (count == right.top()) {
                right.pop();
                count++;
            }
            else if (under.empty()==false && count == under.top()) {
                under.pop();
                count++;
            }
            else {
                under.push(right.top());
                right.pop();
            }
        }
    }
    if (result == true) cout << "Nice";
    else cout << "Sad";

    return 0;
}