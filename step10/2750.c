/*
 *  문제 : 수 정렬하기
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 1000

int main(void){
    int num, min = 0, arr[MAX] = {0};

    scanf("%d", &num);

    for(int i = 0;i < num;i++){
        scanf("%d", &arr[i]);
    }

    // 선택 정렬 진행
    for(int i = 0;i < num - 1;i++){
        min = i;

        for(int j = i + 1;j < num;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0;i < num;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}