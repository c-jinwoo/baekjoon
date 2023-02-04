/*
 *  문제 : 개수 세기
 *  날짜 : 2023년 2월 4일 
 */

#include <stdio.h>
#define MAX 100

int main(void){
    int n, num, count = 0, arr[MAX] = {0};    

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);        
    }

    scanf("%d", &num);

    for(int i = 0;i < n;i++){
        if(arr[i] == num){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}