#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
vector <int> list[101];
bool checked[101];

int bfs(int start) {
    queue <int> q;
    int count = 0, num, change;
    checked[start] = true;
    q.push(start);
    while (q.empty() == false) {
        num = q.front();
        q.pop();
        for (int i = 0; i < list[num].size(); i++) {
            change = list[num][i];
            if (checked[change] == false) {
                q.push(change);
                checked[change] = true;
                count++;
            }
        }
    }
    return count;
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int computer, line, a, b;
    cin >> computer >> line;
    while (line--) {
        cin >> a >> b;
        list[a].push_back(b);
        list[b].push_back(a);
    }
    cout << bfs(1);
    return 0;
}