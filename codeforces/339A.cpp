#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sentence;
    int index = 0;
    char arr[100];
    cin >> sentence;
    int len = sentence.length();
    if (len == 1) cout << sentence;
    else {
        for (int i = 0; i < len; i++) {
            if (sentence[i] >= '0' and sentence[i] <= '9') arr[index++] = sentence[i];
        }
        sort(arr, arr + index); // char 오름차순 정렬 되겠지..?
        for (int i = 0; i < index; i++) {
            if (i == index - 1) cout << arr[i];
            else cout << arr[i] << "+";
        }
    }

    return 0;
}