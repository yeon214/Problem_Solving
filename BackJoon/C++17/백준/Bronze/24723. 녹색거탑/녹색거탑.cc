#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void) {

    int n;
    cin >> n;
    double powDouble = pow(2, n);
    cout << fixed;
    cout.precision(0);
    cout << powDouble;

    return 0;
}
