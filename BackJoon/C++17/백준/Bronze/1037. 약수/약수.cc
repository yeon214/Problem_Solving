#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, minValue = 1000001, maxValue = 0, input;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        minValue = min(minValue, input);
        maxValue = max(maxValue, input);
    }
    cout << minValue * maxValue;


    return 0;
}