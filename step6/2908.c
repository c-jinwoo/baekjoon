/*
 *  문제 : 상수
 *  날짜 : 2023년 2월 10일 
 */

#include <stdio.h>
#include <string.h>
#define MAX 4

int main(void){
    char num1[MAX], num2[MAX];
    int num1_int = 0, num2_int = 0, powers = 1;

    scanf("%s %s", num1, num2);

    for(int i = 0;i < MAX - 1;i++){
        num1_int += (num1[i] - 48) * powers;
        num2_int += (num2[i] - 48) * powers;
        powers *= 10;
    }

    if(num1_int > num2_int){
        printf("%d\n", num1_int);
    }
    else{
        printf("%d\n", num2_int);
    }

    return 0;
}