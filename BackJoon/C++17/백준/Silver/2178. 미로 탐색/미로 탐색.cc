#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
class mazeIndex {
public: int height, width, move;
};
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<mazeIndex>list;
    int height, width, indexHeight, indexWidth, count = 1;
    char maze[102][102];
    bool check[102][102] = { false };
    cin >> height >> width;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            cin >> maze[i][j];
        }
    } //조금 헷갈릴 수 있다 원래 인덱스는 0,0에서 시작인데 문제는 1,1에서 시작한다고 설명 중
    check[1][1] = true;
    list.push({ 1, 1, 1 }); //c++17이상 구조체, 클래스 모두 사용 가능
    while (list.empty() == false) { //이거 따로 필기해야댐 디버깅 오류
        mazeIndex now = list.front();
        list.pop();
        int nowHeight = now.height, nowWidth = now.width;
        if (nowHeight == height && nowWidth == width) {
            cout << now.move;
            break;
        }
        if (nowHeight + 1 <= height && check[nowHeight + 1][nowWidth] == false && maze[nowHeight + 1][nowWidth] == '1') {
            list.push({ nowHeight + 1, nowWidth, now.move+1 }); //아래
            check[nowHeight + 1][nowWidth] = true;
        }
        if (nowWidth + 1 <= width && check[nowHeight][nowWidth+1] == false && maze[nowHeight][nowWidth+1] == '1') {
            list.push({ nowHeight, nowWidth+1, now.move + 1 }); //오른쪽
            check[nowHeight][nowWidth + 1] = true;
        }
        if (nowWidth - 1 >= 0 && check[nowHeight][nowWidth - 1] == false && maze[nowHeight][nowWidth - 1] == '1') {
            list.push({ nowHeight, nowWidth - 1, now.move + 1 }); //왼쪽
            check[nowHeight][nowWidth - 1] = true;
        }
        if (nowHeight - 1 >= 0 && check[nowHeight - 1][nowWidth] == false && maze[nowHeight - 1][nowWidth] == '1') {
            list.push({ nowHeight - 1, nowWidth, now.move + 1 }); //위
            check[nowHeight - 1][nowWidth] = true;
        }
    }
    return 0;
}