/*
 *  문제 : 합
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int n, sum = 0;

    scanf("%d", &n);
    
    for(int i = 1;i <= n;i++){
        sum += i;
    }

    printf("%d\n", sum);
    
    return 0;
}