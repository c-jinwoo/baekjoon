/*
 *  문제 : 시험 성적
 *  날짜 : 2023년 2월 1일 
 */

#include <stdio.h>

int main(void){
    int score;

    scanf("%d", &score);

    if(score >= 90){
        printf("A\n");
    }
    else if(score >= 80){
        printf("B\n");
    }
    else if(score >= 70){
        printf("C\n");
    }
    else if(score >= 60){
        printf("D\n");
    }
    else{
        printf("F\n");
    }

    return 0;
}