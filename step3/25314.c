/*
 *  문제 : 코딩은 체육과목 입니다
 *  날짜 : 2023년 2월 24일 
 */

#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n / 4; i++){
        printf("long ");
    }

    printf("int\n");

    return 0;
}