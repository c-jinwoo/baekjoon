/*
 *  문제 : 영수증
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int X, N, a, b;
    int sum = 0;

    scanf("%d %d", &X, &N);
    
    for(int i = 0;i < N;i++){
        scanf("%d %d", &a, &b);
        sum += a * b;
    }

    if(sum == X){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}