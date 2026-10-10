#include <iostream>
#include <algorithm>
using namespace std;
long long arr[200001];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, integer, query;
    long long sum, start, end, change;
    cin >> testcase;
    while (testcase--) {
        cin >> integer >> query;
        for (int i = 1; i <= integer; i++) cin >> arr[i];
        for (int i = 2; i <= integer; i++) arr[i] += arr[i - 1];
        for (int i = 1; i <= query; i++) {
            cin >> start >> end >> change;
            sum = (end - start + 1) * change + arr[start - 1] + arr[integer] - arr[end];
            //cout << sum << "\n";
            //for (int j = 1; j <= integer; j++) {
            //    if (j < start or j > end) sum += arr[j];
            //    //cout << sum << "\n";
            //}
            if (sum % 2 == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}