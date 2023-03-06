/*
 *  문제 : 피보나치 수 5
 *  날짜 : 2023년 3월 7일 
 */

#include <stdio.h>

int fibo(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

int main(void){
    int num, result;

    scanf("%d", &num);

    result = fibo(num);

    printf("%d\n", result);

    return 0;
}