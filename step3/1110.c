/*
 *  문제 : 더하기 사이클
 *  날짜 : 2023년 2월 2일 
 */

#include <stdio.h>

int main(void){
    int n, n_temp, cycle = 0;

    scanf("%d", &n);

    n_temp = n;

    while(1){
        int sum_digit = n_temp / 10 + n_temp % 10;
        n_temp = (n_temp % 10) * 10 + sum_digit % 10;

        cycle++;

        if(n == n_temp){
            break;
        }
    }

    printf("%d\n", cycle);

    return 0;
}