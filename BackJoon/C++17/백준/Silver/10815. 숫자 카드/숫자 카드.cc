#include <iostream>
#include <algorithm>
using namespace std;
int save[500000];
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); //중복 없음
    int n, m, num;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> save[i];
    sort(save, save + n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;
        cout << int(binary_search(save, save + n, num)) << " ";
    }
    
    return 0; 
}