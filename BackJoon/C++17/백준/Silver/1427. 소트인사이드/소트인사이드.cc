#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string num;
    cin >> num;
    sort(num.begin(), num.end());
    for (int i = num.length() - 1; i >= 0; i--) cout << num[i];
    return 0;
}