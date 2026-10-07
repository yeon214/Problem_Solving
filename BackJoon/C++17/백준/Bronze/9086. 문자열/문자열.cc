#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char arr[1000] = { 0 };
		scanf("%s", arr);
		int lenArr = strlen(arr);
		printf("%c%c\n", arr[0], arr[lenArr - 1]);
	}
	return 0;
}