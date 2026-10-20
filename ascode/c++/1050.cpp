#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    if (!(cin >> testCase)) return 0;

    while (testCase--) {
        int mX, mY;
        double posX, posY;
        char map[11][11];

        cin >> mX >> mY >> posX >> posY;

        for (int i = 0; i < mY; i++) {
            for (int j = 0; j < mX; j++) {
                cin >> map[i][j];
            }
        }

        bool collapsed = false;

        int startX = (int)posX;
        int startY = (int)posY;

        int endX = (posX == (int)posX && posX > 0) ? (int)posX - 1 : (int)posX;
        int endY = (posY == (int)posY && posY > 0) ? (int)posY - 1 : (int)posY;

        int indicesX[] = { startX, endX };
        int indicesY[] = { startY, endY };

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                int tx = indicesX[j];
                int ty = indicesY[i];

                if (tx >= 0 && tx < mX && ty >= 0 && ty < mY) {
                    if (map[ty][tx] == '@') collapsed = true;
                }
            }
        }

        if (collapsed) cout << "Collapse" << endl;
        else cout << "Not collapse" << endl;
    }
    return 0;
}