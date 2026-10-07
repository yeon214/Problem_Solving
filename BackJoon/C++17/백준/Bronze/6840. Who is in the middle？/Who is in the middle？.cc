#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void)
{
    int arr[3], a;
    for (a = 0; a < 3; a++)
    {
        scanf("%d", &arr[a]);
    }
    sort(arr, arr + 3);
    printf("%d", arr[1]);
    return 0;
}