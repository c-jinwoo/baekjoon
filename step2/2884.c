/*
 *  문제 : 사분면 고르기
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int h, m;

    scanf("%d %d", &h, &m);
    
    if(m >= 45){
        m -= 45;
    }
    else{
        m += 15;
        h--;

        if(h < 0){
            h = 23;
        }
    }

    printf("%d %d\n", h, m);
    
    return 0;
}