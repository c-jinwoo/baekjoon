/*
 *  문제 : 평균
 *  날짜 : 2023년 2월 6일 
 */

#include <stdio.h>
#define MAX 1000

int main(void){
    int n, max = 0, arr[MAX] = {0};
    double avg, new_sum = 0;

    scanf("%d", &n);

    for(int i = 0;i < n;i++){
        scanf("%d", &arr[i]);

        if(arr[max] < arr[i]){
            max = i;                    // 최대값 구하기
        }
    }

    // 새로운 성적으로 합산
    for(int i = 0;i < n;i++){
        new_sum += 100 * (double)arr[i] / arr[max];
    }

    avg = new_sum / n;                  // 새로운 값으로 평균 구하기

    printf("%lf\n", avg);

    return 0;
}