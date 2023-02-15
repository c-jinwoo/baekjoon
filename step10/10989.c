/*
 *  문제 : 수 정렬하기 3
 *  날짜 : 2023년 2월 16일 
 */

#include <stdio.h>
#define MAX 10000

int main(void){
    int n, num, arr[MAX] = {0};

    scanf("%d", &n);

    // 카운트 정렬 시작
    for(int i = 0;i < n;i++){
        scanf("%d", &num);

        arr[num - 1]++;
    }

    for(int i = 0;i < MAX;i++){
        while(arr[i]){
            printf("%d\n", i + 1);
            arr[i]--;
        }
    }

    return 0;
}