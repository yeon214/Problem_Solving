#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;
int main(void) {
    unsigned int testcase, n, data, keep;
    string shift;
    cin >> testcase;
    while (testcase--) {
        cin >> data;
        keep = data;
        cin >> shift >> n; //32∫Ò∆Æ
        if (shift == "Left") {
            data <<= n;
            keep >>= (32 - n);
            data |= keep;
        }
        else {
            data >>= n;
            keep <<= (32 - n);
            data |= keep;
        }
        cout << "0x" << setw(8) << setfill('0') << hex << nouppercase << data << "\n";
    }
    return 0;
}