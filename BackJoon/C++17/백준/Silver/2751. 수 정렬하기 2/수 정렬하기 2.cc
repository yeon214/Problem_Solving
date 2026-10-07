#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1000000];
int main(void)
{
	int n, a;
	scanf("%d", &n);
	for (a = 0; a < n; a++)
	{
		scanf("%d", &arr[a]);
	}
	sort(arr, arr + n);
	for (a = 0; a < n; a++)
	{
		printf("%d\n", arr[a]);
	}
	return 0;
}