#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<string> board;
void draw(int y, int x, int n) {
    if (n == 1) {
        board[y][x] = '*';
        return;
    }
    int nextSize = n / 2;
    draw(y, x, nextSize);
    draw(y + nextSize, x, nextSize);
    draw(y, x + nextSize, nextSize);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n, size;
        cin >> n;
        size = pow(2, n - 1);
        board.assign(size, string(size, ' '));
        draw(0, 0, size);
        for (int i = 0; i < size; i++) {
            cout << board[i] << "\n";
        }
    }
    return 0;
}