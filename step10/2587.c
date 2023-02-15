/*
 *  문제 : 대표값2
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 5

int main(void){
    int min = 0, sum = 0, arr[MAX] = {0};

    for(int i = 0;i < MAX;i++){
        scanf("%d", &arr[i]);

        sum += arr[i];
    }

    for(int i = 0;i < MAX - 1;i++){
        min = i;

        for(int j = i + 1;j < MAX;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("%d %d\n", sum / MAX, arr[MAX / 2]);

    return 0;
}