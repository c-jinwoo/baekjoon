/*
 *  문제 : 오븐 시계
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int h, m, time;

    scanf("%d %d %d", &h, &m, &time);
    
    m += time;
    
    h += m / 60;

    h = h % 24;
    
    m = m % 60;

    printf("%d %d\n", h, m);
    
    return 0;
}