/*
 *  문제 : 최소, 최대
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 1000000

int main(void){
    int n, min = 0, max = 0, arr[MAX] = {0};

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);   
    }

    for(int i = 1;i < n;i++){
        if(arr[max] < arr[i]){
            max = i;
        }

        if(arr[min] > arr[i]){
            min = i;
        }
    }

    printf("%d %d\n", arr[min], arr[max]);

    return 0;
}