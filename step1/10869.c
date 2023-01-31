/*
 *  문제 : 사칙연산
 *  날짜 : 2023년 1월 31일 
 */

#include <stdio.h>

int main(void){
    int A, B;

    scanf("%d %d", &A, &B);

    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);

    return 0;
}