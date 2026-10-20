#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double PIE = 3.141592;
    int testcase, angle = 0, input;
    double rad, x, y;
    cout << fixed << setprecision(3);
    cin >> testcase;
    while (testcase--) {
        cin >> input;
        if (input == 1) angle -= 10;
        else angle += 10;
        rad = angle * PIE / 180.0;
        x = floor(cos(rad) * 1000) / 1000.0;
        y = floor(sin(rad) * 1000) / 1000.0;
        cout << x << " " << y << "\n";
    }

    return 0;
}