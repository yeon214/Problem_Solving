#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> nameToNum;
    map<int, string> numToName;
    int n, m, count = 1;
    string input;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> input;
        nameToNum[input] = count;
        numToName[count] = input;
        count++;
    }
    for (int i = 0; i < m; i++) {
        cin >> input;
        if (input[0] >= '0' and input[0] <= '9') {
            int num = stoi(input);
            cout << numToName[num] << "\n";
        }
        else cout << nameToNum[input] << "\n";
    }

    return 0;
}
