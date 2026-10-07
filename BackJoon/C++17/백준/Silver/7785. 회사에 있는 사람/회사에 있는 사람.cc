#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //enter보다 leave가 먼저 나오는 경우는 없겠지? 설마
    int n;
    set <string> list;
    string name, command;
    cin >> n;
    while (n--) {
        cin >> name >> command;
        if (command == "enter") list.insert(name);
        else list.erase(name);
    }
    for (auto it = list.rbegin(); it != list.rend(); ++it) {
        cout << *it << "\n";
    }
    return 0;
}
