/*
 *  문제 : 색종이
 *  날짜 : 2023년 2월 13일 
 */

#include <stdio.h>
#define MAX 100
#define LEN 10

int main(void){
    int paper[MAX][MAX] = {0,};
    int caseNum, n, m, result = 0;

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        scanf("%d %d", &n, &m);

        for(int j = n;j < n + 10;j++){
            for(int k = m;k < m + 10;k++){
                paper[j][k] = 1;
            }
        }
    }

    for(int i = 0;i < MAX;i++){
        for(int j = 0;j < MAX;j++){
            if(paper[i][j]){
                result++;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}