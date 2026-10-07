#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int aNumerator, aDenominator, bNumerator, bDenominator, resultNumerator, resultDenominator, gcdResult;
    cin >> aNumerator >> aDenominator >> bNumerator >> bDenominator;
    resultNumerator = aNumerator * bDenominator + aDenominator * bNumerator;
    resultDenominator = aDenominator * bDenominator;
    gcdResult = gcd(resultNumerator, resultDenominator);
    cout << resultNumerator / gcdResult << " " << resultDenominator / gcdResult;

    return 0;
}
