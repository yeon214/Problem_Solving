#include <iostream>
#include <algorithm>
using namespace std;
class dot {
public: int x, y;
};
dot list[100000];
bool compare(const dot& a, const dot& b) {
    if (a.y == b.y) return a.x < b.x;
    return a.y < b.y;
}
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> list[i].x >> list[i].y;
    sort(list, list + n, compare);
    for (int i = 0; i < n; i++) cout << list[i].x << " " << list[i].y << "\n";
    
    return 0; 
}