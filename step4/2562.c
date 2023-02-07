/*
 *  문제 : 최댓값
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 9

int main(void){
    int max = 0, arr[MAX] = {0};

    for(int i = 0;i < MAX;i++){
        scanf("%d", &arr[i]);   
    }

    for(int i = 1;i < MAX;i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }

    printf("%d\n%d\n", arr[max], max + 1);

    return 0;
}