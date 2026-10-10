#include <iostream>
#include <algorithm>
#include <cstdbool>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, arr[30], n, result;
    bool success;
    cin >> testcase;
    while (testcase--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        if (n == 1) cout << "0\n";
        else {
            result = 0;
            while (true) {
                if (arr[0] == 0 and arr[1] == 0) {
                    cout << "-1\n";
                    break;
                }
                else {
                    success = true;
                    for (int i = 1; i < n; i++) {
                        if (arr[i - 1] >= arr[i]) {
                            success = false;
                            arr[i - 1] /= 2;
                            result++;
                            break;
                        }
                    }
                    if (success == true) {
                        cout << result << "\n";
                        break;
                    }
                }
            }
        }
    }

    return 0;
}