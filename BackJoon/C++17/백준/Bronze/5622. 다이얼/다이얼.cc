#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char arr[16] = { 0 };
	scanf("%s", arr);
	int lenArr = strlen(arr), sum=0;
	for (int i = 0; i < lenArr; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 67) sum += 3;
		else if (arr[i] >= 68 && arr[i] <= 70) sum += 4;
		else if (arr[i] >= 71 && arr[i] <= 73) sum += 5;
		else if (arr[i] >= 74 && arr[i] <= 76) sum += 6;
		else if (arr[i] >= 77 && arr[i] <= 79) sum += 7;
		else if (arr[i] >= 80 && arr[i] <= 83) sum += 8;
		else if (arr[i] >= 84 && arr[i] <= 86) sum += 9;
		else if (arr[i] >= 87 && arr[i] <= 90) sum += 10;
	}
	printf("%d", sum);
	return 0;
}