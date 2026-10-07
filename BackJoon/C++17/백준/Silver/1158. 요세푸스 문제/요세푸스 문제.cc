#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int human, index, save;
    queue <int> list;
    cin >> human >> index;
    for (int i = 1; i <= human; i++) {
        list.push(i);
    }
    cout << "<";
    while (human--) {
        for (int i = 0; i < index-1; i++) {
            save = list.front();
            list.pop();
            list.push(save);
        }
        cout << list.front();
        list.pop();
        if (list.empty()==false) cout << ", ";
    }
    cout << ">";
    return 0;
}