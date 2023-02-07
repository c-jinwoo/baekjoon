/*
 *  문제 : 나머지
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 42
#define NUM 10

int main(void){
    int input, arr[MAX] = {0}, result = 0;

    for(int i = 0;i < NUM;i++){
        scanf("%d", &input);

        arr[input % MAX] = 1;
    }

    for(int i = 0;i < MAX;i++){
        if(arr[i]){
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}