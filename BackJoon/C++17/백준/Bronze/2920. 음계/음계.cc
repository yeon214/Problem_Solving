#include <iostream>
#include <algorithm>
using namespace std;
void printfArr(int* arr) {
    bool flag = true;
    for (int i = 0; i < 8; i++) {
        if (i + 1 != arr[i]) {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "ascending";
        return;
    }
    flag = true;
    for (int i = 0; i < 8; i++) {
        if (8 - i != arr[i]) {
            flag = false;
            break;
        }
    }
    if (flag == true) {
        cout << "descending";
        return;
    }
    cout << "mixed";
    return;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[8];
    for (int i = 0; i < 8; i++) cin >> arr[i];
    printfArr(arr);
    return 0;
}