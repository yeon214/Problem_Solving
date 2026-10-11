#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num, xCal, retry;
    int repeat, count = 1;
    char character;
    cin >> num;
    if (num.length() % 2 == 1) {
        cout << "-1";
        return 0;
    }
    for (int i = 0; i < num.length(); i+=2) {
        repeat = num[i] - '0';
        character = num[i + 1];
        xCal.append(repeat, character);
    }
    if (xCal[0] == '0') {
        cout << "-1";
        return 0;
    }
    for (int i = 1; i < xCal.length(); i++) {
        if (xCal[i - 1] == xCal[i]) count++;
        else {
            if (count > 9) {
                cout << "-1";
                return 0;
            }
            retry += count + '0';
            retry += xCal[i - 1];
            count = 1;
        }
    }
    if (count > 9) {
        cout << "-1";
        return 0;
    }
    retry += count + '0';
    retry += xCal[xCal.length() - 1];
    
    if (retry == num) cout << xCal;
    else cout << "-1";

    return 0;
}