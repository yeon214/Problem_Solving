#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr[101] = { 0 };
	int english[27] = { 0 };
	scanf("%s", arr); //26개
	int lenArr = strlen(arr);
	for (int i = 0; i < 26; i++)
	{
		english[i] = -1;
	}
	for (int i = lenArr-1; i >= 0; i--)
	{
		english[arr[i] - 97]=i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", english[i]);
	}
	return 0;
}