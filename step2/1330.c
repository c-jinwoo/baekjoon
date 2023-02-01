/*
 *  문제 : 두 수 비교하기
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b){
        printf(">\n");
    }
    else if(a == b){
        printf("==\n");
    }
    else{
        printf("<\n");
    }

    return 0;
}