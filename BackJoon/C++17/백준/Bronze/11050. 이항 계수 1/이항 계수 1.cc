#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    int n, k, numerator = 1, denominator = 1;
    cin >> n >> k;
    for (int i = n; i > k; i--) numerator *= i;
    int n_k = n - k;
    for (int i = n_k; i > 1; i--) denominator *= i;
    cout << numerator / denominator;

    return 0;
}
