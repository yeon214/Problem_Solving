#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n, count = 1, num;
	bool find = false;
	stack<int> input, keep;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		input.push(num);
	}

	// 스택 뒤집기: input.top()이 줄 맨 앞 사람이 되게
	stack<int> realInput;
	while (!input.empty()) {
		realInput.push(input.top());
		input.pop();
	}

	while (1) {
		find = false;

		// 1번: 보조 스택 맨 위가 count이면 바로 pop
		if (!keep.empty() && keep.top() == count) {
			keep.pop();
			find = true;
		}
		// 2번: 원래 줄 맨 앞 사람이 count면 간식 주기
		else if (!realInput.empty() && realInput.top() == count) {
			realInput.pop();
			find = true;
		}
		// 3번: 보조 스택도 아니고 줄 맨 앞도 아니면 → 보조로 보내기
		else if (!realInput.empty()) {
			keep.push(realInput.top());
			realInput.pop();
			// 이때는 find == false지만 아직 루프 계속
		}
		else {
			// 더 이상 아무 데도 줄 수 없는데 count가 남았음
			break;
		}

		if (find) count++;
	}

	if (keep.empty()) cout << "Nice";
	else cout << "Sad";

	return 0;
}
