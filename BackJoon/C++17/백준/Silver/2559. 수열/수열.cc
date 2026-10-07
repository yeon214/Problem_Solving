#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, sum = 0, result;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < k; i++) sum += arr[i];
    result = sum;
    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];
        result = max(sum, result);
    }
    cout << result;

    return 0;
}
