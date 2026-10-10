#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase, a, b, c, round, maxround, minround;
    cin >> testcase;
    while (testcase--) {
        cin >> a >> b >> c;
        round = 0;
        while (true) {
            if ((a != b) and (b != c) and (a != c)) { //라운드 시작
                maxround = max(max(a, b), c);
                minround = min(min(a, b), c);

                if (maxround == a) a--;
                else if (maxround == b) b--;
                else if (maxround == c) c--;

                if (minround == a) a++;
                else if (minround == b) b++;
                else if (minround == c) c++;

                round++;
            }
            else { //라운드 수 출력
                cout << round << "\n";
                break;
            }
        }
    }

    return 0;
}