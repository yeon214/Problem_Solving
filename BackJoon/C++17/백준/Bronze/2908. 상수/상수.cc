#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char num1[4] = { 0 }, num2[4] = { 0 };
	scanf("%s %s", num1, num2);
	int temp = 0;
	temp = num1[0];
	num1[0] = num1[2];
	num1[2] = temp;
	temp = num2[0];
	num2[0] = num2[2];
	num2[2] = temp;
	int n1 = atoi(num1), n2 = atoi(num2);
	if (n1 > n2) printf("%d", n1);
	else printf("%d", n2);
	return 0;
}