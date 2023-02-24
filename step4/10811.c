/*
 *  문제 : 바구니 뒤집기
 *  날짜 : 2023년 2월 24일 
 */

#include <stdio.h>
#include <stdlib.h>
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

        int num = to - from + 1;

        int* temp = (int*)malloc(sizeof(int) * num);

        for(int j = from - 1; j <= to - 1; j++){
            temp[j - from + 1] = basket[from + to - 2 - j];
        }

        for(int j = from - 1; j <= to - 1; j++){
            basket[j] = temp[j - from + 1];
        }

        free(temp);
        temp = NULL;
    }
    
    for(int i = 0; i < num_basket; i++){
        printf("%d ", basket[i]);        
    }

    return 0;
}