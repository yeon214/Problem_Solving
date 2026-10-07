#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;
int main(void) {
	int n, num, value;
	stack <int> list;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &num);
		switch (num) {
		case 1:
			scanf("%d", &value);
			list.push(value);
			break;
		case 2:
			if (list.empty()) printf("-1\n");
			else {
				printf("%d\n", list.top());
				list.pop();
			}
			break;
		case 3:
			printf("%d\n", list.size());
			break;
		case 4:
			printf("%d\n", list.empty());
			break;
		case 5:
			if (list.empty()) printf("-1\n");
			else printf("%d\n", list.top());
		}
	}
	return 0;
}