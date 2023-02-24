/*
 *  문제 : 공 바꾸기
 *  날짜 : 2023년 2월 24일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int num_basket, num_throw;
    int from, to;
    int basket[MAX] = {0};

    scanf("%d %d", &num_basket, &num_throw);

    for(int i = 0; i < num_basket; i++){
        basket[i] = i + 1;
    }

    for(int i = 0; i < num_throw; i++){
        scanf("%d %d", &from, &to);

        int temp = basket[to - 1];
        basket[to - 1] = basket[from - 1];
        basket[from - 1] = temp;
    }

    for(int i = 0; i < num_basket; i++){
        printf("%d ", basket[i]);
    }

    return 0;
}