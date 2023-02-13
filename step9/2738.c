/*
 *  문제 : 행렬 덧셈
 *  날짜 : 2023년 2월 13일 
 */

#include <stdio.h>
#define MAX 100

int main(void){ 
    int n, m;
    int A[MAX][MAX], B[MAX][MAX];

    scanf("%d %d", &n, &m);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d", &A[i][j]);   
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d", &B[i][j]);   
        }
    }
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            printf("%d ", A[i][j] + B[i][j]);   
        }
        printf("\n");
    }

    return 0;
}