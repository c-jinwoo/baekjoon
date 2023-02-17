/*
 *  문제 : 소트인사이드
 *  날짜 : 2023년 2월 17일 
 */

#include <stdio.h>
#define MAX 1000000000

int main(void){
    int num, cnt[10] = {0};

    scanf("%d", &num);

    while(num){
        cnt[num % 10]++;
        num /= 10;
    }

    for(int i = 9;i >= 0; i--){
        while(cnt[i]){
            printf("%d", i);
            cnt[i]--;
        }
    }

    return 0;
}