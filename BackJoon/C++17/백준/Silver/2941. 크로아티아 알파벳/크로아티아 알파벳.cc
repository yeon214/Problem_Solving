#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[101];
	int count = 0;
	scanf("%s", word);
	int len = strlen(word), a;
	for (a = 0; a < len; a++)
	{
		if (word[a] == 'c' && word[a + 1] == '=') count++, a++;
		else if (word[a] == 'c' && word[a + 1] == '-') count++, a++;
		else if (word[a] == 'd' && word[a + 1] == 'z' && word[a + 2] == '=') count++, a += 2;
		else if (word[a] == 'd' && word[a + 1] == '-') count++, a++;
		else if (word[a] == 'l' && word[a + 1] == 'j') count++, a++;
		else if (word[a] == 'n' && word[a + 1] == 'j') count++, a++;
		else if (word[a] == 's' && word[a + 1] == '=') count++, a++;
		else if (word[a] == 'z' && word[a + 1] == '=') count++, a++;
		else count++;
	}
	printf("%d", count);
	return 0;
}