#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	char arr[101] = { 0 };
	scanf("%s", arr);
	int lenArr = strlen(arr), sum = 0;
	for (int i = 0; i < lenArr; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);
	return 0;
}