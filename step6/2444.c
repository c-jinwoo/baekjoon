/*
 *  문제 : 별 찍기 - 7
 *  날짜 : 2023년 2월 26일 
 */

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            printf(" ");
        }
        for(int j = 0; j < 2 * i + 1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j <= i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2 * (n - i - 2) + 1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}