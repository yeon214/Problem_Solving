#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase, high, weight, count, result;
    cin >> testcase;
    while (testcase--) {
        result = 1;
        cin >> high >> weight >> count;
        if (count % high == 0) result += (count / (count / high)) * 100 - 1;
        else result += (count % high) * 100;
        result += count / high;
        cout << result << "\n";
    }
    return 0;
}