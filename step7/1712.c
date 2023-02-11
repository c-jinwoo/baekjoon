/*
 *  문제 : 손익분기점
 *  날짜 : 2023년 2월 11일 
 */

#include <stdio.h>

int main(void){
    int p_fix, p_var, p_nb;
    int point = 0;

    scanf("%d %d %d", &p_fix, &p_var, &p_nb);

    if(p_nb - p_var <= 0){
        printf("-1\n");

        return 0;
    }
    
    point = p_fix / (p_nb - p_var);

    while(1){
        if(point * (p_nb - p_var) > p_fix){
            break;
        }
        else{
            point++;
        }
    }

    printf("%d\n", point);

    return 0;
}