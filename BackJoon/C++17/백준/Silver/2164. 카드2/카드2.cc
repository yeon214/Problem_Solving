#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main(void) {
    int n, index = 0, num;
    cin >> n;
    queue <int> list;
    for (int i = 1; i <= n; i++) {
        list.push(i);
    }
    while (list.size() != 1) {
        if (index % 2 == 0) {
            list.pop();
        }
        else {
            num = list.front();
            list.pop();
            list.push(num);
        }
        index++;
    }
    cout << list.front();
    return 0;
}