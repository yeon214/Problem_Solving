#include <iostream>
#include <algorithm>
#include <queue>
using namespace std; 
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, num;
    queue <int> list;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) list.push(i);
    cout << "<";
    while (list.empty()==false) {
        for (int i = 1; i < k; i++) {
            num = list.front();
            list.pop();
            list.push(num);
        }
        cout << list.front();
        list.pop();
        if (list.size()>0) cout << ", ";
    }
    cout << ">";
    return 0;
}