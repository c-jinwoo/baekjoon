/*
 *  문제 : 곱셈
 *  날짜 : 2023년 1월 31일 
 */

#include <stdio.h>

int main(void){
    int a, b, result;

    scanf("%d %d", &a, &b);

    result = a * b;

    for(int i = 0;i < 3;i++){
        printf("%d\n", a * (b % 10));       // b의 각 자리수 마다 계산
        b /= 10;
    }
    printf("%d\n", result);

    return 0;
}