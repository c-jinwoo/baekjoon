/*
 *  문제 : 덩치
 *  날짜 : 2023년 2월 일 
 */

#include <stdio.h>
#define MAX 50

int main(void){ 
    int n;
    int list[MAX][2] = {0, };
    int rank[MAX] = {0};

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d %d", &list[i][0], &list[i][1]);
    }

    for(int i = 0;i < n;i++){
        int max = 0;

        for(int j = 0;j < n;j++){
            if(list[j][0] > list[i][0] && list[j][1] > list[i][1]){
                max++;    
            }
        }
        
        rank[i] = max + 1;
    }

    for(int i = 0;i < n;i++){
        printf("%d ", rank[i]);
    }

    return 0;
}