#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
	char arr[1000000] = { 0 };
	int english[26] = { 0 }, max = 0, check = 0, index = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			english[arr[i] - 'A']++;
		}
		else
		{
			english[arr[i] - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i == 0)
		{
			max = english[i];
		}
		else
		{
			if (max < english[i]) max = english[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (english[i] == max)
		{
			check++;
			index = i;
		}
	}
	if (check == 1)
	{
		printf("%c", index + 65);
	}
	else
	{
		printf("?");
	}
	return 0;
}