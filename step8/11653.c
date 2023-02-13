/*
 *  문제 : 소인수분해
 *  날짜 : 2023년 2월 14일 
 */

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 2;i <= n;i++){
        while(n % i == 0){
            printf("%d\n", i);

            n /= i;
        }

        if(n == 1){
            break;
        }
    }

    return 0;
}