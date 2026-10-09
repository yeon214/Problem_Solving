#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //점수가 0이면 안되나봐
    int n, k, arr[51], result;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    if (arr[k] == 0) {
        result = 0;
        for (int i = 1; i < k; i++) {
            if (arr[i]) result++;
        }
        cout << result;
    }
    else {
        result = k;
        for (int i = k + 1; i <= n; i++) {
            //cout << result << "\n";
            if (arr[i] == arr[k]) result++;
            else break;
        }
        cout << result;
    }

    return 0;
}
