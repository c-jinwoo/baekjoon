/*
 *  문제 : 부녀회장이 될테야
 *  날짜 : 2023년 2월 20일
 */

#include <stdio.h>
#define MAX 15

int main(void){ 
    int caseNum, k, n;
    int room[MAX][MAX];

    // 각 호실 수 사람 계산
    for(int i = 0;i < MAX;i++){
        for(int j = 0;j < MAX;j++){
            if(i == 0){
                room[i][j] = j + 1;
            }
            else{
                if(j == 0){
                    room[i][j] = 1;
                }
                else{
                    room[i][j] = room[i][j - 1] + room[i - 1][j]; 
                }
            }
        }
    }

    scanf("%d", &caseNum);

    for(int i = 0;i < caseNum;i++){
        scanf("%d %d", &k, &n);

        printf("%d\n", room[k][n - 1]);
    }

    return 0;
}