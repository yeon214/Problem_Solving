#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //중복 없애서 2개 이상이면 no
#include <string.h>
int main(void)
{
	int tc, count = 0;
	scanf("%d", &tc);
	while (tc--)
	{
		char word[101];
		scanf("%s", word);
		int len = strlen(word), english[26] = { 0 }, a, flag = 0;
		for (a = 0; a < len-1; a++)
		{
			if (word[a] == word[a + 1]) word[a] = 0;
		}
		for (a = 0; a < len; a++)
		{
			if (word[a] >= 'a' && word[a] <= 'z') english[word[a] - 'a']++;
		}
		for (a = 0; a < 26; a++)
		{
			if (english[a] > 1)
			{
				flag++;
				break;
			}
		}
		if (flag == 0) count++;
	}
	printf("%d", count);
	return 0;
}