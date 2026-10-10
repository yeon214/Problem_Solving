#include <iostream>
#include <algorithm>
using namespace std;
int arr[200001];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, problem, maxDifference, result, count;
    cin >> testcase;
    while (testcase--) {
        result = 0, count = 1;
        cin >> problem >> maxDifference;
        for (int i = 0; i < problem; i++) cin >> arr[i];
        sort(arr, arr + problem);
        for (int i = 1; i < problem; i++) {
            if (arr[i] - arr[i - 1] <= maxDifference) count++;
            else {
                result = max(result, count);
                count = 1;
            }
        }
        result = max(result, count);
        cout << problem - result << "\n";
    }

    return 0;
}