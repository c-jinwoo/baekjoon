/*
 *  문제 : 팩토리얼
 *  날짜 : 2023년 2월 22일 
 */

#include <stdio.h>

int fact(int n){
    if(n < 1){
        return 1;
    }

    return n * fact(n - 1);
}

int main(void){
    int num, result;

    scanf("%d", &num);

    result = fact(num);

    printf("%d\n", result);

    return 0;
}