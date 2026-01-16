#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
//집합 안에 중복이 있는 테케는 없겠지..?
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> aList;
    int aQuantity, bQuantity, input, count = 0;
    cin >> aQuantity >> bQuantity;
    for (int i = 0; i < aQuantity; i++) {
        cin >> input;
        aList.insert(input);
    }
    for (int i = 0; i < bQuantity; i++) {
        cin >> input;
        if (aList.find(input) != aList.end()) count++;
    }
    cout << aQuantity - count + bQuantity - count;

    return 0;
}
