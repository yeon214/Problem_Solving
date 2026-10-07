#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m >= 45) { //1
		printf("%d %d", h, m - 45);
	}
	else if (m < 45 && h == 0) { //2
		printf("%d %d", h - 1 + 24, m - 45 + 60);
	}
	else if (m < 45) { //3
		printf("%d %d", h - 1, m - 45 + 60);
	}
	return 0;
}