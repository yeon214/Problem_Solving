#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) 
{
	char arr[100] = { 0 };
	int b;
	long long sum = 0, multi = 1, a;
	scanf("%s %d", arr, &b);
	int len = strlen(arr);
	for (int i = len-1; i >= 0; i--)
	{
		multi = 0;
		if (arr[len-1-i] != '0')
		{
			multi = 1;
			for (int j = 0; j < i; j++)
			{
				multi *= b;
			}
			if (arr[len - 1 - i] >= '1' && arr[len - 1 - i] <= '9')
			{
				a = arr[len - 1 - i];
				multi *= (a - 48);
			}
			else if (arr[len - 1 - i] >= 'A' && arr[len - 1 - i] <= 'Z')
			{
				a = arr[len - 1 - i];
				multi *= (a - 55);
			}
		}
		sum += multi;
	}
	printf("%lld", sum);
	return 0;
}