/*
 *  문제 : 구구단
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 1;i < 10;i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}