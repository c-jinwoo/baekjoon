/*
 *  문제 : 과제 안 내신 분..?
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 30

int main(void){
    int input, arr[MAX] = {0};

    for(int i = 0;i < MAX - 2;i++){
        scanf("%d", &input);
        
        arr[input - 1] = 1;
    }

    for(int i = 0;i < MAX;i++){
        if(!arr[i]){
            printf("%d\n", i + 1);
        }
    }

    return 0;
}