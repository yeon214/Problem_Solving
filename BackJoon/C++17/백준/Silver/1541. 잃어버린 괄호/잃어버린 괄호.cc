#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string sentence;
    bool minus = false;
    int numString, total = 0, index = 0;
    char temp, num[6] = { 0 };
    cin >> sentence;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] >= '0' && sentence[i] <= '9') {
            index = 0;
            while (sentence[i] >= '0' && sentence[i] <= '9') {
                num[index++] = sentence[i++];
            }
            numString = stoi(num);
        }
        for (int i = 0; i < 6; i++) num[i] = 0;
        if (minus==true) total -= numString;
        else total += numString;
        if (sentence[i] == '-') minus = true;
    }
    cout << total;
    return 0;
}