#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase, total, count;
    string sentence;
    cin >> testcase;
    while (testcase--) {
        cin >> sentence;
        total = 0, count = 1;
        for (auto i = 0; i < sentence.length(); i++) {
            if (sentence[i] == 'O') total += count++;
            else count = 1;
        }
        cout << total << "\n";
    }
    return 0;
}