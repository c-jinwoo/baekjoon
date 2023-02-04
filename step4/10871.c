/*
 *  문제 : X보다 작은 수
 *  날짜 : 2023년 2월 5일 
 */

#include <stdio.h>
#define MAX 10000

int main(void){
    int n, x, arr[MAX] = {0};  

    scanf("%d %d", &n, &x);

    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] < x){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}