#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void) {
    int n, count = 0, plus = 666, count6 = 0;
    string plusString;
    scanf("%d", &n);
    while (count != n) {
        count6 = 0;
        plusString = to_string(plus);
        for (int i = 0; i <= plusString.length() - 3; i++) {
            if (plusString[i] == '6' && plusString[i+1] == '6' && plusString[i+2] == '6') count6++;
        }
        if (count6) count++;
        plus++;
        //printf("plus:%d count:%d\n", plus, count);
    }
    printf("%d", plus-1);
    return 0;
}