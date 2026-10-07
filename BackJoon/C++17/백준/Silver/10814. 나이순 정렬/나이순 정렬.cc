#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class person {
public: int age, index;
      string name;
};
person list[100000];
bool compare(const person &a, const person &b){
    if (a.age != b.age) return a.age < b.age;
    return a.index < b.index;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> list[i].age >> list[i].name;
        list[i].index = i;
    }
    sort(list, list + n, compare);
    for (int i = 0; i < n; i++) {
        cout << list[i].age << " " << list[i].name << "\n";
    }
    return 0;
}