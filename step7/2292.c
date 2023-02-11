/*
 *  문제 : 벌집
 *  날짜 : 2023년 2월 11일 
 */

#include <stdio.h>

int main(void){
    int r_dest, r_curr = 1, step = 1;

    scanf("%d", &r_dest);
    
    while(1){
        if(r_dest <= r_curr){
            break;
        }

        r_curr += 6 * step;
        step++;
    }

    printf("%d\n", step);

    return 0;
}