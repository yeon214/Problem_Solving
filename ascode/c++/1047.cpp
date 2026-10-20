#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, x, y;
    double xCal, yCal, len;
    cout << fixed << setprecision(3);
    cin >> testcase;
    while (testcase--) {
        cin >> x >> y;
        len = sqrt(x * x + y * y);
        xCal = (floor((x / len) * 1000)) / 1000;
        yCal = (floor((y / len) * 1000)) / 1000;
        cout << xCal << " " << yCal << "\n";
    }

    return 0;
}