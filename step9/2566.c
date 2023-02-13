/*
 *  문제 : 최댓값
 *  날짜 : 2023년 2월 13일 
 */

#include <stdio.h>
#define LEN 9

int main(void){
    int max = 0;
    int input[LEN][LEN] = {0,};

    for(int i = 0;i < LEN;i++){
        for(int j = 0;j < LEN;j++){
            scanf("%d", &input[i][j]);
        }
    }

    for(int i = 0;i < LEN;i++){
        for(int j = 0;j < LEN;j++){
            if(input[max / LEN][max % LEN] < input[i][j]){
                max = i * LEN + j;
            }
        }
    }

    printf("%d\n%d %d\n", input[max / LEN][max % LEN], max / LEN + 1, max % LEN + 1);

    return 0;
}