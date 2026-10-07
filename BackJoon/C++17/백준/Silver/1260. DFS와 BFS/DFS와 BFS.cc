#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector <int> list[1001];
bool visit[1001];

void dfs(int start) {
    cout << start << " ";
    visit[start] = true;
    int next;
    for (int i = 0; i < list[start].size(); i++) {
        next = list[start][i];
        if (visit[next] == false) dfs(next);
    }
}

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visit[start] = true;
    int num, next;
    while (q.empty() == false) {
        num = q.front();
        q.pop();
        cout << num << " ";
        for (int i = 0; i < list[num].size(); i++) {
            next = list[num][i];
            if (visit[next] == false) {
                visit[next] = true;
                q.push(next);
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int dot, line, start, a, b;
    cin >> dot >> line >> start;
    for (int i = 0; i < line; i++) {
        cin >> a >> b;
        list[a].push_back(b);
        list[b].push_back(a);
    }
    for (int i = 1; i <= dot; i++) sort(list[i].begin(), list[i].end());

    dfs(start);
    cout << "\n";

    fill(visit, visit + 1001, false);
    bfs(start);
    cout << "\n";
    return 0;
}