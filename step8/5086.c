/*
 *  문제 : 배수와 약수
 *  날짜 : 2023년 2월 27일 
 */

#include <stdio.h>

int main(void){
    int n, m;

    while(1){
        scanf("%d %d", &n, &m);

        if(n == 0 && m == 0){
            break;
        }

        if(m % n == 0){
            printf("factor\n");
        }
        else if(n % m == 0){
            printf("multiple\n");
        }
        else{
            printf("neither\n");
        }
    }
    
    return 0;
}