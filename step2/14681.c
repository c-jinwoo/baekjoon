/*
 *  문제 : 사분면 고르기
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int x_coor, y_coor, quadrant;

    scanf("%d %d", &x_coor, &y_coor);

    if(x_coor > 0){
        quadrant = (y_coor > 0) ? 1 : 4;
    }
    else{        
        quadrant = (y_coor > 0) ? 2 : 3;
    }

    printf("%d\n", quadrant);
    
    return 0;
}