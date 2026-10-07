#include <iostream>
#include <algorithm>
#include <cmath>
int prime[1000001];
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for (int i = 2; i <= 1000000; i++) prime[i] = i;
    for (int i = 2; i <= sqrt(1000000); i++) {
        if (prime[i] == 0) continue;
        for (int j = 2 * i; j <= 1000000; j += i) prime[j] = 0;
    }
    
    int testcase, count, input;
    cin >> testcase;
    while (testcase--) {
        count = 0;
        cin >> input;
        for (int i = 2; i <= input / 2; i++) {
            if (i == input / 2) {
                if (prime[i]) count++;
            }
            else {
                if (prime[i] and prime[input - i]) count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}