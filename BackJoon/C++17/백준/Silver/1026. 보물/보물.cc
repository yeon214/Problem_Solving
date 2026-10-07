#include <iostream>
#include <algorithm> //2차원 dp 방법 공부해야함
#include <functional>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[50], b[50], result = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n, greater<int>());
    for (int i = 0; i < n; i++) result += a[i] * b[i];
    cout << result;
    return 0;
}