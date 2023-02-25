/*
 *  문제 : 그대로 출력하기
 *  날짜 : 2023년 2월 25일 
 */

#include <stdio.h>

int main(void){
    char input;

    while(scanf("%c", &input) != EOF){
        printf("%c", input);
    }

    return 0;
}