#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
char map[25][25];
bool checked[25][25] = { false };
int n;
class index {
public: int indexI, indexJ;
};
int bfs(int i, int j) {
	queue <index> list;
	index present;
	int presentI, presentJ, count = 1;
	list.push({ i,j });
	while (list.empty() == false) {
		present = list.front();
		list.pop();
		presentI = present.indexI;
		presentJ = present.indexJ;
		checked[presentI][presentJ] = true;
		if (presentI - 1 >= 0 && checked[presentI-1][presentJ] == false && map[presentI - 1][presentJ] == '1') { //위
			checked[presentI - 1][presentJ] = true;
			list.push({ presentI - 1,presentJ });
			count++;
		}
		if (presentI + 1 < n && checked[presentI + 1][presentJ] == false && map[presentI + 1][presentJ] == '1') { //아래
			checked[presentI + 1][presentJ] = true;
			list.push({ presentI + 1,presentJ });
			count++;
		}
		if (presentJ - 1 >= 0 && checked[presentI][presentJ - 1] == false && map[presentI][presentJ - 1] == '1') { //왼쪽
			checked[presentI][presentJ - 1] = true;
			list.push({ presentI,presentJ - 1});
			count++;
		}
		if (presentJ + 1 < n && checked[presentI][presentJ + 1] == false && map[presentI][presentJ + 1] == '1') { //오른쪽
			checked[presentI][presentJ + 1] = true;
			list.push({ presentI,presentJ + 1 });
			count++;
		}
	}
	return count;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int count = 0;
	vector<int>result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1' && checked[i][j]==false) {
				count++;
				result.push_back(bfs(i,j));
			}
		}
	}
	sort(result.begin(), result.end());
	cout << count << "\n";
	for (int i = 0; i < result.size(); i++) cout << result[i] << "\n";

	return 0;
}