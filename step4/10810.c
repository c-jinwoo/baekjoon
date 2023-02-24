/*
 *  문제 : 공 넣기
 *  날짜 : 2023년 2월 24일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int num_basket, num_throw;
    int start, end, number;
    int basket[MAX] = {0};

    scanf("%d %d", &num_basket, &num_throw);

    for(int i = 0; i < num_throw; i++){
        scanf("%d %d %d", &start, &end, &number);

        for(int j = start; j <= end; j++){
            basket[j - 1] = number;
        }
    }

    for(int i = 0; i < num_basket; i++){
        printf("%d ", basket[i]);
    }

    return 0;
}