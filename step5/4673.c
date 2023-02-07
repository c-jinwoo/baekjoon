/*
 *  문제 : 셀프 넘버
 *  날짜 : 2023년 2월 7일 
 */

#include <stdio.h>
#define MAX 10000

int num[MAX] = {0};

void d(int n){
    int next = n;

    // 각 자리 수 합
    while(n / 10){
        next += n % 10;
        n /= 10;
    }
    next += n;

    // 10000 이하일 경우 진행
    if(next - 1 < MAX){
        num[next - 1] = 1;

        d(next);
    }
}


int main(void){
    for(int i = 1;i <= 10000;i++){
        d(i);
    }

    for(int i = 0;i < 10000;i++){
        if(!num[i]){
            printf("%d\n", i + 1);      // 여태 나오지 않은 수 출력
        }
    }

    return 0;
}