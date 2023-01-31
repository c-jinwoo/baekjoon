/*
 *  문제 : 1998년생인 내가 태국에서는 2541년생?!
 *  날짜 : 2023년 1월 31일 
 */

#include <stdio.h>
#define YEARDIFF 543        // 불기 - 서기

int main(void){
    int year;

    scanf("%d", &year);

    printf("%d\n", year - YEARDIFF);

    return 0;
}