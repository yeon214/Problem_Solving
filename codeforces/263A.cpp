#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int row, col, input; //row 행, col 열
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> input;
            if (input == 1) row = i, col = j;
        }
    }
    cout << abs(row - 2) + abs(col - 2);

    return 0;
}
