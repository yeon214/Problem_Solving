#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stack>
using namespace std;
int main(void) {
	int k, num, sum = 0;
	stack <int> list;
	scanf("%d", &k);
	while (k--) {
		scanf("%d", &num);
		if (num) list.push(num);
		else list.pop();
	}
	while (list.empty() == false) {
		sum += list.top();
		list.pop();
	}
	printf("%d", sum);
	return 0;
}