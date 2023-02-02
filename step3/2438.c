/*
 *  문제 : 별 찍기 - 1
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < i + 1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}