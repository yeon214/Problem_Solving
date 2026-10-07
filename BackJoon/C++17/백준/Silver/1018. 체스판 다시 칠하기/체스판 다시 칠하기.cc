#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
    char board[51][51];
    int h, w, startW = 0, startB = 0, min, result = 2500;
    scanf("%d %d", &h, &w);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            scanf(" %c", &board[i][j]);
        }
    }
    for (int i = 0; i <= h-8; i++) {
        for (int j = 0; j <= w-8; j++) {
            startW = 0, startB = 0;
            for (int k = i; k < i + 8; k++) {
                for (int q = j; q < j + 8; q++) {
                    if ((k + q) % 2 == 0 && board[k][q] == 'B') startW++;
                    if ((k + q) % 2 == 1 && board[k][q] == 'W') startW++;
                    if ((k + q) % 2 == 0 && board[k][q] == 'W') startB++;
                    if ((k + q) % 2 == 1 && board[k][q] == 'B') startB++;
                    //printf("k:%d q:%d startW:%d startB:%d\n", k, q, startW, startB);
                }
            }
            //printf("\n");
            //printf("i:%d j:%d startW:%d startB:%d\n\n", i, j, startW, startB);
            if (startW < startB) min = startW;
            else min = startB;
            if (result > min) result = min;
        }
    }
    printf("%d", result);
    return 0;
}