#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double PIE = 3.141592;
    int testcase, degree = 0;
    double x = 0.0, y = 0.0, rad;
    char input;
    //char랑 cin 부딪히는거 아니야..? 일단 해보자
    cout << fixed << setprecision(3);
    cin >> testcase;
    while (testcase--) {
        cin >> input;
        rad = degree * PIE / 180;
        if (input == 'w') { //앞
            x += cos(rad);
            y += sin(rad);
        }
        else if (input == 's') { //뒤
            x -= cos(rad);
            y -= sin(rad);
        }
        else if (input == 'a') { //왼쪽 10도 회전
            degree -= 10;
        }
        else { //d 오른쪽 10도 회전.. 아마?
            degree += 10;
        }
        cout << floor(x * 1000) / 1000 << " " << floor(y * 1000) / 1000 << "\n";
    }

    return 0;
}