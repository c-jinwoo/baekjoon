/*
 *  문제 : 윤년
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int year, result;

    scanf("%d", &year);

    result = ((year % 4 == 0) && ((year % 100) || (year % 400 == 0))) ? 1 : 0;

    printf("%d\n", result);
    
    return 0;
}