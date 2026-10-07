#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char input;
    int count = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> input;
            if ((i + j) % 2 == 0 && input == 'F') count++;
        }
    }
    cout << count;
    return 0;
}