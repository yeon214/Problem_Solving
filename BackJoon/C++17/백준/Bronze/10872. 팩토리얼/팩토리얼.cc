#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {

    int n, result = 1;
    cin >> n;
    for (int i = n; i > 1; i--) result *= i;
    cout << result;

    return 0;
}
