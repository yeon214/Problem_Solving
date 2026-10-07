#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int max, num[10] = { 0 };
    string numString;
    cin >> numString;
    for (int i = 0; i < numString.length(); i++) {
        if (numString[i] == '9') num[6]++;
        else num[numString[i] - '0']++;
        //cout << "num[6]:" << num[6] <<", i:" << i << "\n";
    }
    max = (num[6]+1) / 2;
    for (int i = 0; i < 9; i++) {
        if (max < num[i] && i != 6) max = num[i];
    }
    cout << max;
    return 0;
}