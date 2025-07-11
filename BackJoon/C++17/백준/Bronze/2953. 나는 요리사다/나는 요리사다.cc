#include <stdio.h>
int main(){
    int score[5][4];
    for(int i = 0 ; i < 5; i++){
        for(int j = 0 ; j < 4; j++){
            scanf("%d",&score[i][j]);
        }
    }
    int N = 0,Max = 0;
    for(int i = 0 ; i < 5; i++){
        int check = 0;
        for(int j = 0 ; j < 4; j++){
            check += score[i][j];
            if (check > Max){
                Max = check;
                N = i+1;
            }
        }
    }
    printf("%d %d",N,Max);
}