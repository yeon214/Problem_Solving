#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string unit[] = { "해","경","조","억","만" };
string remain[] = { "천","백","십", "" };
string number[] = { "일", "이", "삼", "사", "오", "육", "칠", "팔", "구" };
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    bool check; //숫자가 한번이라도 등장했는지 확인
    bool first;
    string num;
    cin >> testcase;
    while (testcase--) {
        string array[24] = {};
        int index = 23, unitIndex = 0;
        check = false, first = false;
        cin >> num;
        for (int i = num.length() - 1; i >= 0; i--) {
            array[index--] = num[i];
        } //ㅇㅋ
        for (int i = 0; i < 24; i++) {
            if (array[i].empty() == false and array[i] != "0") {
                if (i == 23) cout << number[stoi(array[i]) - 1];
                //맨 마지막, 숫자만 출력
                else if (i == 19) {
                    if (first == true and array[i] == "1") cout << "일";
                    if (array[i] != "1") cout << number[stoi(array[i]) - 1];
                }
                //만의 자리, 1이 아닐 때만 숫자 출력
                else {
                    if (check == false and (i - 3) % 4 == 0) cout << number[stoi(array[i]) - 1];
                    else if (stoi(array[i]) > 1) cout << number[stoi(array[i]) - 1];
                    cout << remain[i % 4];
                }
                check = true;
                first = true;
            }
            if ((i - 3) % 4 == 0 and i != 23 and check == true) {
                cout << unit[unitIndex] << " ";
                //단위 출력
                check = false;
            }
            if ((i - 3) % 4 == 0) unitIndex++;

        }
        cout << "\n";
    }

    return 0;
}