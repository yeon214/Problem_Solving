#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int x, y, w, h, result[4] = { 0 };
	scanf("%d %d %d %d", &x, &y, &w, &h);
	result[0] = x, result[1] = y;
	result[2] = w - x, result[3] = h - y;
	sort(result, result + 4);
	printf("%d", result[0]);
	return 0;
}