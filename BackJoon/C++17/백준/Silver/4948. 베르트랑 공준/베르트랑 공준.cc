#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int prime[246913], sum[246913];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 2; i <= 246912; i++) prime[i] = i;
    for (int i = 2; i <= sqrt(246912); i++) {
        if (prime[i] == 0) continue;
        for (int j = 2 * i; j <= 246912; j += i) prime[j] = 0;
    }
    for (int i = 2; i <= 246912; i++) {
        if (prime[i]) sum[i] = sum[i-1] + 1;
        else sum[i] = sum[i-1];
    }

    int input;
    while (cin >> input) {
        if (input == 0) break;
        cout << sum[input * 2] - sum[input] << "\n";
    }

    return 0;
}